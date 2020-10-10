#ifndef AGONY_PP_EVAL_REC_UNROLL_2048_TO_3071_H
#define AGONY_PP_EVAL_REC_UNROLL_2048_TO_3071_H

#define AGONY_PP_PRIVATE_EVAL_REC_2048(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2048_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2048_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2048_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2048_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2048_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2048_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2048_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2048_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2048_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2048_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2049
#define AGONY_PP_PRIVATE_EVAL_REC_2048_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2049(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2049_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2049_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2049_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2049_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2049_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2049_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2049_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2049_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2049_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2049_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2050
#define AGONY_PP_PRIVATE_EVAL_REC_2049_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2050(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2050_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2050_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2050_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2050_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2050_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2050_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2050_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2050_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2050_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2050_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2051
#define AGONY_PP_PRIVATE_EVAL_REC_2050_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2051(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2051_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2051_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2051_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2051_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2051_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2051_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2051_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2051_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2051_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2051_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2052
#define AGONY_PP_PRIVATE_EVAL_REC_2051_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2052(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2052_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2052_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2052_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2052_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2052_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2052_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2052_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2052_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2052_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2052_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2053
#define AGONY_PP_PRIVATE_EVAL_REC_2052_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2053(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2053_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2053_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2053_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2053_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2053_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2053_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2053_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2053_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2053_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2053_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2054
#define AGONY_PP_PRIVATE_EVAL_REC_2053_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2054(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2054_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2054_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2054_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2054_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2054_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2054_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2054_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2054_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2054_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2054_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2055
#define AGONY_PP_PRIVATE_EVAL_REC_2054_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2055(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2055_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2055_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2055_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2055_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2055_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2055_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2055_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2055_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2055_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2055_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2056
#define AGONY_PP_PRIVATE_EVAL_REC_2055_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2056(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2056_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2056_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2056_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2056_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2056_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2056_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2056_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2056_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2056_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2056_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2057
#define AGONY_PP_PRIVATE_EVAL_REC_2056_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2057(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2057_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2057_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2057_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2057_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2057_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2057_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2057_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2057_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2057_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2057_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2058
#define AGONY_PP_PRIVATE_EVAL_REC_2057_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2058(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2058_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2058_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2058_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2058_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2058_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2058_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2058_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2058_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2058_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2058_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2059
#define AGONY_PP_PRIVATE_EVAL_REC_2058_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2059(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2059_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2059_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2059_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2059_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2059_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2059_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2059_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2059_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2059_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2059_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2060
#define AGONY_PP_PRIVATE_EVAL_REC_2059_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2060(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2060_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2060_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2060_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2060_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2060_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2060_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2060_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2060_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2060_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2060_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2061
#define AGONY_PP_PRIVATE_EVAL_REC_2060_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2061(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2061_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2061_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2061_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2061_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2061_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2061_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2061_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2061_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2061_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2061_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2062
#define AGONY_PP_PRIVATE_EVAL_REC_2061_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2062(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2062_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2062_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2062_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2062_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2062_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2062_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2062_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2062_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2062_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2062_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2063
#define AGONY_PP_PRIVATE_EVAL_REC_2062_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2063(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2063_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2063_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2063_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2063_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2063_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2063_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2063_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2063_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2063_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2063_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2064
#define AGONY_PP_PRIVATE_EVAL_REC_2063_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2064(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2064_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2064_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2064_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2064_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2064_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2064_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2064_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2064_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2064_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2064_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2065
#define AGONY_PP_PRIVATE_EVAL_REC_2064_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2065(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2065_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2065_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2065_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2065_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2065_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2065_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2065_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2065_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2065_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2065_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2066
#define AGONY_PP_PRIVATE_EVAL_REC_2065_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2066(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2066_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2066_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2066_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2066_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2066_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2066_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2066_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2066_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2066_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2066_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2067
#define AGONY_PP_PRIVATE_EVAL_REC_2066_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2067(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2067_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2067_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2067_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2067_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2067_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2067_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2067_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2067_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2067_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2067_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2068
#define AGONY_PP_PRIVATE_EVAL_REC_2067_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2068(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2068_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2068_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2068_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2068_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2068_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2068_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2068_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2068_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2068_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2068_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2069
#define AGONY_PP_PRIVATE_EVAL_REC_2068_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2069(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2069_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2069_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2069_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2069_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2069_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2069_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2069_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2069_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2069_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2069_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2070
#define AGONY_PP_PRIVATE_EVAL_REC_2069_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2070(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2070_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2070_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2070_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2070_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2070_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2070_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2070_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2070_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2070_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2070_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2071
#define AGONY_PP_PRIVATE_EVAL_REC_2070_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2071(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2071_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2071_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2071_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2071_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2071_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2071_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2071_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2071_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2071_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2071_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2072
#define AGONY_PP_PRIVATE_EVAL_REC_2071_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2072(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2072_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2072_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2072_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2072_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2072_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2072_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2072_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2072_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2072_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2072_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2073
#define AGONY_PP_PRIVATE_EVAL_REC_2072_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2073(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2073_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2073_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2073_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2073_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2073_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2073_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2073_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2073_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2073_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2073_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2074
#define AGONY_PP_PRIVATE_EVAL_REC_2073_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2074(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2074_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2074_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2074_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2074_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2074_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2074_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2074_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2074_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2074_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2074_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2075
#define AGONY_PP_PRIVATE_EVAL_REC_2074_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2075(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2075_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2075_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2075_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2075_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2075_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2075_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2075_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2075_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2075_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2075_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2076
#define AGONY_PP_PRIVATE_EVAL_REC_2075_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2076(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2076_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2076_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2076_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2076_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2076_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2076_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2076_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2076_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2076_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2076_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2077
#define AGONY_PP_PRIVATE_EVAL_REC_2076_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2077(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2077_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2077_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2077_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2077_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2077_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2077_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2077_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2077_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2077_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2077_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2078
#define AGONY_PP_PRIVATE_EVAL_REC_2077_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2078(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2078_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2078_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2078_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2078_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2078_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2078_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2078_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2078_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2078_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2078_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2079
#define AGONY_PP_PRIVATE_EVAL_REC_2078_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2079(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2079_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2079_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2079_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2079_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2079_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2079_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2079_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2079_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2079_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2079_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2080
#define AGONY_PP_PRIVATE_EVAL_REC_2079_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2080(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2080_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2080_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2080_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2080_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2080_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2080_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2080_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2080_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2080_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2080_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2081
#define AGONY_PP_PRIVATE_EVAL_REC_2080_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2081(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2081_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2081_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2081_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2081_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2081_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2081_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2081_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2081_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2081_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2081_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2082
#define AGONY_PP_PRIVATE_EVAL_REC_2081_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2082(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2082_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2082_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2082_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2082_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2082_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2082_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2082_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2082_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2082_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2082_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2083
#define AGONY_PP_PRIVATE_EVAL_REC_2082_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2083(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2083_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2083_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2083_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2083_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2083_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2083_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2083_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2083_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2083_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2083_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2084
#define AGONY_PP_PRIVATE_EVAL_REC_2083_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2084(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2084_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2084_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2084_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2084_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2084_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2084_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2084_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2084_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2084_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2084_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2085
#define AGONY_PP_PRIVATE_EVAL_REC_2084_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2085(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2085_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2085_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2085_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2085_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2085_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2085_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2085_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2085_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2085_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2085_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2086
#define AGONY_PP_PRIVATE_EVAL_REC_2085_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2086(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2086_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2086_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2086_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2086_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2086_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2086_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2086_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2086_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2086_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2086_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2087
#define AGONY_PP_PRIVATE_EVAL_REC_2086_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2087(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2087_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2087_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2087_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2087_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2087_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2087_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2087_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2087_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2087_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2087_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2088
#define AGONY_PP_PRIVATE_EVAL_REC_2087_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2088(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2088_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2088_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2088_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2088_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2088_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2088_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2088_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2088_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2088_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2088_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2089
#define AGONY_PP_PRIVATE_EVAL_REC_2088_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2089(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2089_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2089_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2089_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2089_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2089_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2089_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2089_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2089_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2089_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2089_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2090
#define AGONY_PP_PRIVATE_EVAL_REC_2089_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2090(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2090_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2090_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2090_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2090_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2090_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2090_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2090_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2090_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2090_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2090_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2091
#define AGONY_PP_PRIVATE_EVAL_REC_2090_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2091(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2091_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2091_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2091_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2091_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2091_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2091_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2091_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2091_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2091_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2091_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2092
#define AGONY_PP_PRIVATE_EVAL_REC_2091_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2092(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2092_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2092_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2092_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2092_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2092_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2092_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2092_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2092_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2092_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2092_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2093
#define AGONY_PP_PRIVATE_EVAL_REC_2092_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2093(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2093_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2093_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2093_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2093_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2093_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2093_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2093_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2093_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2093_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2093_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2094
#define AGONY_PP_PRIVATE_EVAL_REC_2093_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2094(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2094_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2094_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2094_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2094_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2094_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2094_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2094_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2094_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2094_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2094_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2095
#define AGONY_PP_PRIVATE_EVAL_REC_2094_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2095(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2095_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2095_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2095_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2095_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2095_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2095_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2095_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2095_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2095_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2095_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2096
#define AGONY_PP_PRIVATE_EVAL_REC_2095_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2096(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2096_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2096_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2096_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2096_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2096_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2096_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2096_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2096_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2096_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2096_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2097
#define AGONY_PP_PRIVATE_EVAL_REC_2096_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2097(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2097_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2097_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2097_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2097_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2097_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2097_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2097_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2097_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2097_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2097_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2098
#define AGONY_PP_PRIVATE_EVAL_REC_2097_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2098(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2098_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2098_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2098_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2098_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2098_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2098_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2098_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2098_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2098_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2098_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2099
#define AGONY_PP_PRIVATE_EVAL_REC_2098_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2099(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2099_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2099_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2099_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2099_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2099_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2099_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2099_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2099_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2099_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2099_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2100
#define AGONY_PP_PRIVATE_EVAL_REC_2099_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2100(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2100_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2100_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2100_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2100_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2100_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2100_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2100_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2100_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2100_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2100_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2101
#define AGONY_PP_PRIVATE_EVAL_REC_2100_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2101(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2101_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2101_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2101_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2101_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2101_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2101_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2101_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2101_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2101_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2101_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2102
#define AGONY_PP_PRIVATE_EVAL_REC_2101_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2102(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2102_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2102_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2102_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2102_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2102_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2102_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2102_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2102_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2102_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2102_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2103
#define AGONY_PP_PRIVATE_EVAL_REC_2102_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2103(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2103_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2103_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2103_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2103_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2103_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2103_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2103_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2103_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2103_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2103_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2104
#define AGONY_PP_PRIVATE_EVAL_REC_2103_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2104(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2104_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2104_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2104_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2104_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2104_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2104_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2104_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2104_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2104_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2104_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2105
#define AGONY_PP_PRIVATE_EVAL_REC_2104_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2105(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2105_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2105_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2105_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2105_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2105_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2105_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2105_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2105_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2105_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2105_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2106
#define AGONY_PP_PRIVATE_EVAL_REC_2105_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2106(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2106_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2106_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2106_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2106_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2106_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2106_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2106_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2106_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2106_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2106_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2107
#define AGONY_PP_PRIVATE_EVAL_REC_2106_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2107(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2107_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2107_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2107_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2107_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2107_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2107_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2107_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2107_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2107_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2107_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2108
#define AGONY_PP_PRIVATE_EVAL_REC_2107_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2108(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2108_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2108_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2108_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2108_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2108_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2108_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2108_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2108_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2108_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2108_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2109
#define AGONY_PP_PRIVATE_EVAL_REC_2108_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2109(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2109_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2109_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2109_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2109_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2109_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2109_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2109_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2109_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2109_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2109_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2110
#define AGONY_PP_PRIVATE_EVAL_REC_2109_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2110(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2110_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2110_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2110_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2110_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2110_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2110_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2110_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2110_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2110_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2110_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2111
#define AGONY_PP_PRIVATE_EVAL_REC_2110_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2111(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2111_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2111_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2111_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2111_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2111_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2111_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2111_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2111_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2111_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2111_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2112
#define AGONY_PP_PRIVATE_EVAL_REC_2111_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2112(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2112_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2112_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2112_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2112_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2112_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2112_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2112_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2112_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2112_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2112_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2113
#define AGONY_PP_PRIVATE_EVAL_REC_2112_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2113(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2113_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2113_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2113_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2113_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2113_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2113_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2113_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2113_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2113_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2113_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2114
#define AGONY_PP_PRIVATE_EVAL_REC_2113_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2114(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2114_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2114_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2114_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2114_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2114_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2114_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2114_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2114_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2114_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2114_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2115
#define AGONY_PP_PRIVATE_EVAL_REC_2114_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2115(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2115_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2115_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2115_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2115_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2115_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2115_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2115_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2115_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2115_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2115_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2116
#define AGONY_PP_PRIVATE_EVAL_REC_2115_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2116(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2116_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2116_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2116_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2116_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2116_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2116_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2116_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2116_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2116_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2116_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2117
#define AGONY_PP_PRIVATE_EVAL_REC_2116_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2117(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2117_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2117_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2117_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2117_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2117_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2117_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2117_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2117_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2117_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2117_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2118
#define AGONY_PP_PRIVATE_EVAL_REC_2117_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2118(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2118_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2118_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2118_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2118_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2118_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2118_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2118_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2118_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2118_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2118_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2119
#define AGONY_PP_PRIVATE_EVAL_REC_2118_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2119(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2119_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2119_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2119_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2119_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2119_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2119_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2119_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2119_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2119_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2119_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2120
#define AGONY_PP_PRIVATE_EVAL_REC_2119_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2120(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2120_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2120_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2120_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2120_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2120_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2120_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2120_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2120_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2120_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2120_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2121
#define AGONY_PP_PRIVATE_EVAL_REC_2120_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2121(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2121_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2121_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2121_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2121_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2121_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2121_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2121_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2121_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2121_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2121_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2122
#define AGONY_PP_PRIVATE_EVAL_REC_2121_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2122(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2122_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2122_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2122_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2122_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2122_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2122_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2122_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2122_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2122_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2122_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2123
#define AGONY_PP_PRIVATE_EVAL_REC_2122_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2123(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2123_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2123_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2123_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2123_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2123_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2123_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2123_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2123_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2123_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2123_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2124
#define AGONY_PP_PRIVATE_EVAL_REC_2123_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2124(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2124_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2124_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2124_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2124_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2124_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2124_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2124_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2124_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2124_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2124_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2125
#define AGONY_PP_PRIVATE_EVAL_REC_2124_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2125(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2125_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2125_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2125_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2125_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2125_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2125_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2125_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2125_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2125_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2125_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2126
#define AGONY_PP_PRIVATE_EVAL_REC_2125_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2126(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2126_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2126_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2126_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2126_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2126_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2126_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2126_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2126_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2126_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2126_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2127
#define AGONY_PP_PRIVATE_EVAL_REC_2126_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2127(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2127_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2127_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2127_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2127_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2127_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2127_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2127_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2127_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2127_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2127_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2128
#define AGONY_PP_PRIVATE_EVAL_REC_2127_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2128(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2128_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2128_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2128_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2128_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2128_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2128_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2128_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2128_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2128_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2128_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2129
#define AGONY_PP_PRIVATE_EVAL_REC_2128_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2129(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2129_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2129_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2129_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2129_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2129_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2129_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2129_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2129_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2129_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2129_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2130
#define AGONY_PP_PRIVATE_EVAL_REC_2129_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2130(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2130_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2130_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2130_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2130_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2130_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2130_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2130_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2130_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2130_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2130_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2131
#define AGONY_PP_PRIVATE_EVAL_REC_2130_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2131(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2131_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2131_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2131_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2131_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2131_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2131_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2131_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2131_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2131_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2131_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2132
#define AGONY_PP_PRIVATE_EVAL_REC_2131_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2132(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2132_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2132_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2132_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2132_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2132_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2132_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2132_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2132_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2132_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2132_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2133
#define AGONY_PP_PRIVATE_EVAL_REC_2132_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2133(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2133_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2133_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2133_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2133_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2133_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2133_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2133_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2133_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2133_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2133_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2134
#define AGONY_PP_PRIVATE_EVAL_REC_2133_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2134(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2134_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2134_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2134_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2134_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2134_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2134_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2134_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2134_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2134_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2134_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2135
#define AGONY_PP_PRIVATE_EVAL_REC_2134_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2135(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2135_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2135_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2135_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2135_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2135_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2135_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2135_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2135_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2135_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2135_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2136
#define AGONY_PP_PRIVATE_EVAL_REC_2135_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2136(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2136_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2136_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2136_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2136_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2136_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2136_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2136_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2136_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2136_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2136_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2137
#define AGONY_PP_PRIVATE_EVAL_REC_2136_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2137(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2137_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2137_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2137_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2137_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2137_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2137_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2137_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2137_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2137_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2137_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2138
#define AGONY_PP_PRIVATE_EVAL_REC_2137_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2138(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2138_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2138_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2138_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2138_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2138_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2138_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2138_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2138_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2138_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2138_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2139
#define AGONY_PP_PRIVATE_EVAL_REC_2138_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2139(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2139_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2139_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2139_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2139_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2139_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2139_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2139_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2139_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2139_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2139_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2140
#define AGONY_PP_PRIVATE_EVAL_REC_2139_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2140(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2140_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2140_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2140_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2140_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2140_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2140_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2140_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2140_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2140_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2140_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2141
#define AGONY_PP_PRIVATE_EVAL_REC_2140_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2141(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2141_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2141_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2141_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2141_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2141_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2141_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2141_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2141_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2141_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2141_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2142
#define AGONY_PP_PRIVATE_EVAL_REC_2141_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2142(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2142_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2142_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2142_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2142_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2142_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2142_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2142_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2142_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2142_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2142_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2143
#define AGONY_PP_PRIVATE_EVAL_REC_2142_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2143(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2143_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2143_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2143_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2143_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2143_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2143_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2143_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2143_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2143_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2143_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2144
#define AGONY_PP_PRIVATE_EVAL_REC_2143_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2144(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2144_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2144_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2144_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2144_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2144_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2144_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2144_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2144_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2144_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2144_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2145
#define AGONY_PP_PRIVATE_EVAL_REC_2144_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2145(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2145_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2145_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2145_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2145_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2145_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2145_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2145_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2145_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2145_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2145_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2146
#define AGONY_PP_PRIVATE_EVAL_REC_2145_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2146(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2146_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2146_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2146_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2146_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2146_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2146_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2146_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2146_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2146_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2146_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2147
#define AGONY_PP_PRIVATE_EVAL_REC_2146_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2147(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2147_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2147_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2147_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2147_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2147_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2147_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2147_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2147_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2147_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2147_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2148
#define AGONY_PP_PRIVATE_EVAL_REC_2147_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2148(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2148_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2148_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2148_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2148_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2148_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2148_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2148_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2148_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2148_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2148_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2149
#define AGONY_PP_PRIVATE_EVAL_REC_2148_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2149(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2149_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2149_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2149_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2149_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2149_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2149_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2149_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2149_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2149_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2149_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2150
#define AGONY_PP_PRIVATE_EVAL_REC_2149_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2150(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2150_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2150_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2150_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2150_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2150_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2150_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2150_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2150_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2150_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2150_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2151
#define AGONY_PP_PRIVATE_EVAL_REC_2150_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2151(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2151_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2151_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2151_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2151_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2151_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2151_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2151_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2151_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2151_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2151_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2152
#define AGONY_PP_PRIVATE_EVAL_REC_2151_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2152(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2152_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2152_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2152_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2152_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2152_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2152_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2152_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2152_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2152_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2152_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2153
#define AGONY_PP_PRIVATE_EVAL_REC_2152_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2153(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2153_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2153_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2153_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2153_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2153_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2153_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2153_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2153_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2153_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2153_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2154
#define AGONY_PP_PRIVATE_EVAL_REC_2153_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2154(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2154_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2154_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2154_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2154_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2154_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2154_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2154_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2154_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2154_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2154_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2155
#define AGONY_PP_PRIVATE_EVAL_REC_2154_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2155(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2155_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2155_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2155_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2155_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2155_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2155_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2155_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2155_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2155_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2155_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2156
#define AGONY_PP_PRIVATE_EVAL_REC_2155_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2156(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2156_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2156_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2156_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2156_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2156_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2156_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2156_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2156_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2156_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2156_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2157
#define AGONY_PP_PRIVATE_EVAL_REC_2156_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2157(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2157_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2157_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2157_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2157_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2157_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2157_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2157_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2157_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2157_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2157_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2158
#define AGONY_PP_PRIVATE_EVAL_REC_2157_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2158(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2158_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2158_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2158_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2158_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2158_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2158_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2158_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2158_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2158_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2158_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2159
#define AGONY_PP_PRIVATE_EVAL_REC_2158_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2159(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2159_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2159_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2159_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2159_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2159_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2159_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2159_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2159_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2159_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2159_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2160
#define AGONY_PP_PRIVATE_EVAL_REC_2159_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2160(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2160_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2160_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2160_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2160_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2160_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2160_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2160_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2160_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2160_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2160_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2161
#define AGONY_PP_PRIVATE_EVAL_REC_2160_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2161(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2161_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2161_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2161_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2161_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2161_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2161_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2161_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2161_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2161_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2161_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2162
#define AGONY_PP_PRIVATE_EVAL_REC_2161_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2162(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2162_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2162_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2162_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2162_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2162_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2162_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2162_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2162_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2162_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2162_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2163
#define AGONY_PP_PRIVATE_EVAL_REC_2162_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2163(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2163_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2163_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2163_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2163_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2163_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2163_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2163_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2163_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2163_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2163_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2164
#define AGONY_PP_PRIVATE_EVAL_REC_2163_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2164(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2164_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2164_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2164_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2164_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2164_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2164_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2164_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2164_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2164_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2164_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2165
#define AGONY_PP_PRIVATE_EVAL_REC_2164_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2165(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2165_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2165_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2165_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2165_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2165_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2165_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2165_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2165_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2165_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2165_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2166
#define AGONY_PP_PRIVATE_EVAL_REC_2165_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2166(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2166_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2166_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2166_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2166_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2166_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2166_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2166_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2166_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2166_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2166_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2167
#define AGONY_PP_PRIVATE_EVAL_REC_2166_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2167(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2167_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2167_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2167_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2167_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2167_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2167_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2167_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2167_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2167_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2167_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2168
#define AGONY_PP_PRIVATE_EVAL_REC_2167_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2168(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2168_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2168_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2168_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2168_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2168_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2168_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2168_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2168_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2168_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2168_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2169
#define AGONY_PP_PRIVATE_EVAL_REC_2168_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2169(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2169_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2169_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2169_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2169_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2169_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2169_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2169_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2169_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2169_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2169_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2170
#define AGONY_PP_PRIVATE_EVAL_REC_2169_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2170(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2170_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2170_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2170_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2170_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2170_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2170_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2170_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2170_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2170_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2170_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2171
#define AGONY_PP_PRIVATE_EVAL_REC_2170_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2171(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2171_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2171_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2171_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2171_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2171_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2171_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2171_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2171_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2171_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2171_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2172
#define AGONY_PP_PRIVATE_EVAL_REC_2171_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2172(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2172_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2172_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2172_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2172_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2172_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2172_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2172_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2172_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2172_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2172_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2173
#define AGONY_PP_PRIVATE_EVAL_REC_2172_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2173(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2173_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2173_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2173_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2173_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2173_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2173_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2173_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2173_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2173_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2173_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2174
#define AGONY_PP_PRIVATE_EVAL_REC_2173_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2174(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2174_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2174_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2174_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2174_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2174_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2174_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2174_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2174_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2174_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2174_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2175
#define AGONY_PP_PRIVATE_EVAL_REC_2174_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2175(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2175_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2175_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2175_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2175_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2175_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2175_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2175_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2175_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2175_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2175_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2176
#define AGONY_PP_PRIVATE_EVAL_REC_2175_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2176(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2176_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2176_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2176_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2176_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2176_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2176_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2176_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2176_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2176_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2176_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2177
#define AGONY_PP_PRIVATE_EVAL_REC_2176_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2177(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2177_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2177_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2177_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2177_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2177_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2177_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2177_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2177_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2177_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2177_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2178
#define AGONY_PP_PRIVATE_EVAL_REC_2177_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2178(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2178_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2178_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2178_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2178_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2178_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2178_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2178_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2178_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2178_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2178_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2179
#define AGONY_PP_PRIVATE_EVAL_REC_2178_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2179(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2179_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2179_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2179_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2179_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2179_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2179_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2179_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2179_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2179_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2179_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2180
#define AGONY_PP_PRIVATE_EVAL_REC_2179_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2180(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2180_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2180_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2180_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2180_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2180_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2180_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2180_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2180_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2180_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2180_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2181
#define AGONY_PP_PRIVATE_EVAL_REC_2180_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2181(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2181_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2181_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2181_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2181_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2181_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2181_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2181_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2181_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2181_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2181_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2182
#define AGONY_PP_PRIVATE_EVAL_REC_2181_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2182(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2182_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2182_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2182_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2182_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2182_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2182_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2182_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2182_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2182_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2182_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2183
#define AGONY_PP_PRIVATE_EVAL_REC_2182_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2183(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2183_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2183_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2183_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2183_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2183_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2183_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2183_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2183_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2183_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2183_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2184
#define AGONY_PP_PRIVATE_EVAL_REC_2183_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2184(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2184_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2184_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2184_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2184_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2184_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2184_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2184_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2184_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2184_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2184_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2185
#define AGONY_PP_PRIVATE_EVAL_REC_2184_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2185(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2185_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2185_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2185_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2185_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2185_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2185_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2185_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2185_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2185_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2185_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2186
#define AGONY_PP_PRIVATE_EVAL_REC_2185_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2186(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2186_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2186_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2186_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2186_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2186_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2186_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2186_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2186_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2186_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2186_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2187
#define AGONY_PP_PRIVATE_EVAL_REC_2186_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2187(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2187_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2187_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2187_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2187_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2187_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2187_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2187_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2187_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2187_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2187_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2188
#define AGONY_PP_PRIVATE_EVAL_REC_2187_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2188(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2188_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2188_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2188_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2188_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2188_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2188_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2188_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2188_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2188_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2188_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2189
#define AGONY_PP_PRIVATE_EVAL_REC_2188_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2189(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2189_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2189_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2189_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2189_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2189_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2189_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2189_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2189_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2189_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2189_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2190
#define AGONY_PP_PRIVATE_EVAL_REC_2189_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2190(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2190_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2190_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2190_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2190_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2190_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2190_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2190_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2190_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2190_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2190_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2191
#define AGONY_PP_PRIVATE_EVAL_REC_2190_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2191(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2191_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2191_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2191_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2191_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2191_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2191_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2191_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2191_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2191_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2191_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2192
#define AGONY_PP_PRIVATE_EVAL_REC_2191_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2192(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2192_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2192_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2192_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2192_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2192_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2192_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2192_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2192_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2192_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2192_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2193
#define AGONY_PP_PRIVATE_EVAL_REC_2192_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2193(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2193_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2193_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2193_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2193_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2193_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2193_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2193_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2193_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2193_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2193_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2194
#define AGONY_PP_PRIVATE_EVAL_REC_2193_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2194(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2194_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2194_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2194_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2194_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2194_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2194_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2194_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2194_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2194_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2194_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2195
#define AGONY_PP_PRIVATE_EVAL_REC_2194_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2195(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2195_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2195_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2195_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2195_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2195_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2195_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2195_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2195_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2195_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2195_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2196
#define AGONY_PP_PRIVATE_EVAL_REC_2195_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2196(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2196_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2196_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2196_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2196_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2196_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2196_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2196_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2196_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2196_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2196_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2197
#define AGONY_PP_PRIVATE_EVAL_REC_2196_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2197(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2197_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2197_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2197_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2197_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2197_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2197_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2197_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2197_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2197_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2197_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2198
#define AGONY_PP_PRIVATE_EVAL_REC_2197_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2198(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2198_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2198_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2198_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2198_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2198_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2198_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2198_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2198_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2198_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2198_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2199
#define AGONY_PP_PRIVATE_EVAL_REC_2198_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2199(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2199_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2199_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2199_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2199_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2199_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2199_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2199_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2199_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2199_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2199_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2200
#define AGONY_PP_PRIVATE_EVAL_REC_2199_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2200(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2200_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2200_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2200_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2200_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2200_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2200_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2200_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2200_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2200_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2200_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2201
#define AGONY_PP_PRIVATE_EVAL_REC_2200_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2201(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2201_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2201_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2201_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2201_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2201_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2201_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2201_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2201_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2201_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2201_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2202
#define AGONY_PP_PRIVATE_EVAL_REC_2201_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2202(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2202_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2202_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2202_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2202_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2202_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2202_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2202_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2202_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2202_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2202_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2203
#define AGONY_PP_PRIVATE_EVAL_REC_2202_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2203(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2203_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2203_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2203_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2203_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2203_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2203_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2203_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2203_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2203_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2203_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2204
#define AGONY_PP_PRIVATE_EVAL_REC_2203_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2204(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2204_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2204_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2204_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2204_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2204_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2204_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2204_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2204_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2204_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2204_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2205
#define AGONY_PP_PRIVATE_EVAL_REC_2204_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2205(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2205_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2205_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2205_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2205_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2205_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2205_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2205_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2205_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2205_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2205_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2206
#define AGONY_PP_PRIVATE_EVAL_REC_2205_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2206(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2206_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2206_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2206_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2206_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2206_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2206_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2206_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2206_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2206_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2206_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2207
#define AGONY_PP_PRIVATE_EVAL_REC_2206_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2207(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2207_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2207_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2207_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2207_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2207_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2207_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2207_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2207_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2207_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2207_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2208
#define AGONY_PP_PRIVATE_EVAL_REC_2207_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2208(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2208_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2208_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2208_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2208_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2208_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2208_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2208_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2208_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2208_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2208_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2209
#define AGONY_PP_PRIVATE_EVAL_REC_2208_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2209(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2209_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2209_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2209_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2209_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2209_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2209_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2209_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2209_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2209_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2209_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2210
#define AGONY_PP_PRIVATE_EVAL_REC_2209_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2210(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2210_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2210_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2210_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2210_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2210_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2210_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2210_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2210_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2210_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2210_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2211
#define AGONY_PP_PRIVATE_EVAL_REC_2210_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2211(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2211_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2211_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2211_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2211_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2211_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2211_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2211_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2211_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2211_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2211_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2212
#define AGONY_PP_PRIVATE_EVAL_REC_2211_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2212(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2212_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2212_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2212_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2212_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2212_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2212_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2212_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2212_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2212_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2212_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2213
#define AGONY_PP_PRIVATE_EVAL_REC_2212_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2213(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2213_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2213_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2213_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2213_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2213_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2213_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2213_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2213_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2213_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2213_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2214
#define AGONY_PP_PRIVATE_EVAL_REC_2213_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2214(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2214_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2214_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2214_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2214_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2214_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2214_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2214_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2214_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2214_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2214_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2215
#define AGONY_PP_PRIVATE_EVAL_REC_2214_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2215(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2215_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2215_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2215_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2215_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2215_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2215_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2215_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2215_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2215_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2215_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2216
#define AGONY_PP_PRIVATE_EVAL_REC_2215_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2216(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2216_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2216_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2216_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2216_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2216_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2216_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2216_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2216_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2216_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2216_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2217
#define AGONY_PP_PRIVATE_EVAL_REC_2216_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2217(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2217_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2217_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2217_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2217_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2217_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2217_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2217_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2217_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2217_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2217_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2218
#define AGONY_PP_PRIVATE_EVAL_REC_2217_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2218(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2218_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2218_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2218_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2218_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2218_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2218_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2218_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2218_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2218_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2218_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2219
#define AGONY_PP_PRIVATE_EVAL_REC_2218_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2219(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2219_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2219_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2219_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2219_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2219_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2219_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2219_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2219_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2219_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2219_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2220
#define AGONY_PP_PRIVATE_EVAL_REC_2219_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2220(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2220_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2220_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2220_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2220_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2220_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2220_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2220_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2220_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2220_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2220_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2221
#define AGONY_PP_PRIVATE_EVAL_REC_2220_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2221(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2221_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2221_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2221_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2221_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2221_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2221_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2221_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2221_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2221_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2221_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2222
#define AGONY_PP_PRIVATE_EVAL_REC_2221_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2222(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2222_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2222_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2222_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2222_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2222_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2222_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2222_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2222_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2222_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2222_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2223
#define AGONY_PP_PRIVATE_EVAL_REC_2222_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2223(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2223_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2223_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2223_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2223_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2223_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2223_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2223_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2223_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2223_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2223_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2224
#define AGONY_PP_PRIVATE_EVAL_REC_2223_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2224(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2224_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2224_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2224_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2224_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2224_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2224_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2224_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2224_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2224_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2224_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2225
#define AGONY_PP_PRIVATE_EVAL_REC_2224_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2225(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2225_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2225_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2225_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2225_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2225_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2225_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2225_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2225_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2225_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2225_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2226
#define AGONY_PP_PRIVATE_EVAL_REC_2225_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2226(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2226_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2226_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2226_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2226_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2226_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2226_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2226_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2226_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2226_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2226_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2227
#define AGONY_PP_PRIVATE_EVAL_REC_2226_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2227(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2227_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2227_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2227_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2227_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2227_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2227_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2227_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2227_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2227_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2227_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2228
#define AGONY_PP_PRIVATE_EVAL_REC_2227_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2228(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2228_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2228_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2228_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2228_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2228_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2228_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2228_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2228_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2228_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2228_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2229
#define AGONY_PP_PRIVATE_EVAL_REC_2228_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2229(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2229_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2229_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2229_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2229_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2229_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2229_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2229_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2229_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2229_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2229_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2230
#define AGONY_PP_PRIVATE_EVAL_REC_2229_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2230(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2230_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2230_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2230_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2230_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2230_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2230_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2230_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2230_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2230_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2230_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2231
#define AGONY_PP_PRIVATE_EVAL_REC_2230_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2231(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2231_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2231_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2231_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2231_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2231_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2231_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2231_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2231_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2231_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2231_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2232
#define AGONY_PP_PRIVATE_EVAL_REC_2231_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2232(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2232_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2232_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2232_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2232_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2232_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2232_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2232_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2232_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2232_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2232_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2233
#define AGONY_PP_PRIVATE_EVAL_REC_2232_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2233(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2233_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2233_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2233_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2233_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2233_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2233_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2233_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2233_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2233_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2233_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2234
#define AGONY_PP_PRIVATE_EVAL_REC_2233_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2234(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2234_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2234_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2234_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2234_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2234_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2234_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2234_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2234_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2234_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2234_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2235
#define AGONY_PP_PRIVATE_EVAL_REC_2234_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2235(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2235_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2235_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2235_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2235_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2235_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2235_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2235_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2235_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2235_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2235_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2236
#define AGONY_PP_PRIVATE_EVAL_REC_2235_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2236(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2236_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2236_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2236_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2236_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2236_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2236_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2236_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2236_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2236_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2236_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2237
#define AGONY_PP_PRIVATE_EVAL_REC_2236_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2237(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2237_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2237_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2237_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2237_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2237_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2237_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2237_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2237_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2237_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2237_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2238
#define AGONY_PP_PRIVATE_EVAL_REC_2237_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2238(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2238_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2238_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2238_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2238_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2238_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2238_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2238_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2238_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2238_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2238_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2239
#define AGONY_PP_PRIVATE_EVAL_REC_2238_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2239(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2239_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2239_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2239_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2239_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2239_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2239_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2239_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2239_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2239_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2239_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2240
#define AGONY_PP_PRIVATE_EVAL_REC_2239_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2240(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2240_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2240_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2240_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2240_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2240_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2240_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2240_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2240_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2240_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2240_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2241
#define AGONY_PP_PRIVATE_EVAL_REC_2240_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2241(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2241_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2241_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2241_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2241_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2241_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2241_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2241_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2241_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2241_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2241_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2242
#define AGONY_PP_PRIVATE_EVAL_REC_2241_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2242(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2242_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2242_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2242_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2242_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2242_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2242_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2242_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2242_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2242_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2242_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2243
#define AGONY_PP_PRIVATE_EVAL_REC_2242_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2243(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2243_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2243_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2243_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2243_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2243_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2243_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2243_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2243_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2243_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2243_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2244
#define AGONY_PP_PRIVATE_EVAL_REC_2243_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2244(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2244_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2244_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2244_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2244_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2244_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2244_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2244_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2244_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2244_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2244_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2245
#define AGONY_PP_PRIVATE_EVAL_REC_2244_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2245(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2245_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2245_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2245_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2245_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2245_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2245_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2245_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2245_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2245_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2245_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2246
#define AGONY_PP_PRIVATE_EVAL_REC_2245_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2246(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2246_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2246_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2246_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2246_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2246_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2246_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2246_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2246_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2246_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2246_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2247
#define AGONY_PP_PRIVATE_EVAL_REC_2246_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2247(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2247_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2247_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2247_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2247_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2247_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2247_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2247_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2247_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2247_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2247_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2248
#define AGONY_PP_PRIVATE_EVAL_REC_2247_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2248(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2248_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2248_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2248_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2248_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2248_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2248_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2248_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2248_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2248_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2248_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2249
#define AGONY_PP_PRIVATE_EVAL_REC_2248_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2249(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2249_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2249_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2249_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2249_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2249_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2249_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2249_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2249_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2249_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2249_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2250
#define AGONY_PP_PRIVATE_EVAL_REC_2249_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2250(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2250_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2250_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2250_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2250_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2250_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2250_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2250_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2250_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2250_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2250_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2251
#define AGONY_PP_PRIVATE_EVAL_REC_2250_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2251(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2251_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2251_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2251_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2251_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2251_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2251_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2251_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2251_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2251_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2251_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2252
#define AGONY_PP_PRIVATE_EVAL_REC_2251_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2252(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2252_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2252_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2252_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2252_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2252_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2252_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2252_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2252_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2252_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2252_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2253
#define AGONY_PP_PRIVATE_EVAL_REC_2252_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2253(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2253_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2253_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2253_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2253_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2253_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2253_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2253_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2253_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2253_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2253_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2254
#define AGONY_PP_PRIVATE_EVAL_REC_2253_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2254(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2254_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2254_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2254_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2254_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2254_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2254_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2254_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2254_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2254_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2254_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2255
#define AGONY_PP_PRIVATE_EVAL_REC_2254_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2255(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2255_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2255_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2255_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2255_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2255_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2255_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2255_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2255_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2255_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2255_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2256
#define AGONY_PP_PRIVATE_EVAL_REC_2255_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2256(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2256_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2256_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2256_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2256_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2256_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2256_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2256_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2256_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2256_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2256_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2257
#define AGONY_PP_PRIVATE_EVAL_REC_2256_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2257(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2257_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2257_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2257_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2257_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2257_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2257_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2257_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2257_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2257_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2257_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2258
#define AGONY_PP_PRIVATE_EVAL_REC_2257_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2258(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2258_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2258_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2258_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2258_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2258_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2258_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2258_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2258_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2258_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2258_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2259
#define AGONY_PP_PRIVATE_EVAL_REC_2258_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2259(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2259_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2259_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2259_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2259_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2259_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2259_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2259_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2259_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2259_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2259_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2260
#define AGONY_PP_PRIVATE_EVAL_REC_2259_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2260(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2260_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2260_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2260_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2260_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2260_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2260_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2260_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2260_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2260_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2260_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2261
#define AGONY_PP_PRIVATE_EVAL_REC_2260_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2261(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2261_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2261_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2261_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2261_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2261_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2261_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2261_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2261_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2261_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2261_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2262
#define AGONY_PP_PRIVATE_EVAL_REC_2261_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2262(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2262_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2262_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2262_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2262_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2262_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2262_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2262_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2262_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2262_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2262_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2263
#define AGONY_PP_PRIVATE_EVAL_REC_2262_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2263(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2263_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2263_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2263_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2263_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2263_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2263_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2263_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2263_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2263_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2263_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2264
#define AGONY_PP_PRIVATE_EVAL_REC_2263_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2264(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2264_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2264_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2264_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2264_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2264_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2264_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2264_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2264_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2264_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2264_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2265
#define AGONY_PP_PRIVATE_EVAL_REC_2264_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2265(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2265_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2265_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2265_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2265_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2265_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2265_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2265_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2265_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2265_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2265_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2266
#define AGONY_PP_PRIVATE_EVAL_REC_2265_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2266(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2266_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2266_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2266_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2266_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2266_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2266_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2266_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2266_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2266_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2266_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2267
#define AGONY_PP_PRIVATE_EVAL_REC_2266_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2267(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2267_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2267_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2267_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2267_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2267_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2267_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2267_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2267_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2267_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2267_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2268
#define AGONY_PP_PRIVATE_EVAL_REC_2267_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2268(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2268_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2268_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2268_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2268_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2268_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2268_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2268_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2268_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2268_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2268_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2269
#define AGONY_PP_PRIVATE_EVAL_REC_2268_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2269(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2269_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2269_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2269_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2269_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2269_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2269_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2269_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2269_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2269_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2269_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2270
#define AGONY_PP_PRIVATE_EVAL_REC_2269_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2270(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2270_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2270_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2270_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2270_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2270_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2270_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2270_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2270_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2270_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2270_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2271
#define AGONY_PP_PRIVATE_EVAL_REC_2270_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2271(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2271_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2271_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2271_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2271_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2271_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2271_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2271_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2271_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2271_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2271_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2272
#define AGONY_PP_PRIVATE_EVAL_REC_2271_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2272(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2272_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2272_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2272_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2272_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2272_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2272_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2272_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2272_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2272_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2272_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2273
#define AGONY_PP_PRIVATE_EVAL_REC_2272_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2273(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2273_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2273_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2273_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2273_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2273_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2273_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2273_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2273_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2273_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2273_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2274
#define AGONY_PP_PRIVATE_EVAL_REC_2273_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2274(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2274_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2274_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2274_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2274_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2274_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2274_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2274_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2274_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2274_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2274_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2275
#define AGONY_PP_PRIVATE_EVAL_REC_2274_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2275(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2275_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2275_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2275_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2275_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2275_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2275_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2275_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2275_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2275_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2275_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2276
#define AGONY_PP_PRIVATE_EVAL_REC_2275_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2276(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2276_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2276_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2276_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2276_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2276_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2276_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2276_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2276_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2276_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2276_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2277
#define AGONY_PP_PRIVATE_EVAL_REC_2276_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2277(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2277_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2277_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2277_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2277_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2277_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2277_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2277_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2277_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2277_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2277_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2278
#define AGONY_PP_PRIVATE_EVAL_REC_2277_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2278(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2278_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2278_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2278_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2278_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2278_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2278_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2278_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2278_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2278_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2278_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2279
#define AGONY_PP_PRIVATE_EVAL_REC_2278_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2279(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2279_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2279_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2279_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2279_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2279_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2279_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2279_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2279_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2279_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2279_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2280
#define AGONY_PP_PRIVATE_EVAL_REC_2279_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2280(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2280_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2280_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2280_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2280_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2280_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2280_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2280_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2280_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2280_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2280_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2281
#define AGONY_PP_PRIVATE_EVAL_REC_2280_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2281(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2281_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2281_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2281_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2281_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2281_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2281_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2281_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2281_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2281_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2281_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2282
#define AGONY_PP_PRIVATE_EVAL_REC_2281_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2282(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2282_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2282_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2282_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2282_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2282_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2282_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2282_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2282_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2282_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2282_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2283
#define AGONY_PP_PRIVATE_EVAL_REC_2282_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2283(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2283_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2283_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2283_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2283_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2283_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2283_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2283_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2283_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2283_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2283_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2284
#define AGONY_PP_PRIVATE_EVAL_REC_2283_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2284(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2284_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2284_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2284_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2284_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2284_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2284_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2284_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2284_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2284_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2284_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2285
#define AGONY_PP_PRIVATE_EVAL_REC_2284_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2285(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2285_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2285_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2285_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2285_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2285_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2285_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2285_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2285_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2285_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2285_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2286
#define AGONY_PP_PRIVATE_EVAL_REC_2285_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2286(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2286_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2286_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2286_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2286_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2286_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2286_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2286_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2286_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2286_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2286_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2287
#define AGONY_PP_PRIVATE_EVAL_REC_2286_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2287(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2287_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2287_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2287_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2287_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2287_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2287_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2287_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2287_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2287_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2287_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2288
#define AGONY_PP_PRIVATE_EVAL_REC_2287_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2288(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2288_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2288_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2288_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2288_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2288_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2288_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2288_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2288_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2288_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2288_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2289
#define AGONY_PP_PRIVATE_EVAL_REC_2288_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2289(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2289_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2289_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2289_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2289_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2289_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2289_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2289_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2289_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2289_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2289_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2290
#define AGONY_PP_PRIVATE_EVAL_REC_2289_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2290(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2290_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2290_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2290_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2290_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2290_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2290_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2290_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2290_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2290_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2290_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2291
#define AGONY_PP_PRIVATE_EVAL_REC_2290_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2291(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2291_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2291_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2291_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2291_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2291_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2291_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2291_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2291_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2291_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2291_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2292
#define AGONY_PP_PRIVATE_EVAL_REC_2291_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2292(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2292_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2292_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2292_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2292_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2292_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2292_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2292_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2292_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2292_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2292_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2293
#define AGONY_PP_PRIVATE_EVAL_REC_2292_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2293(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2293_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2293_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2293_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2293_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2293_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2293_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2293_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2293_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2293_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2293_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2294
#define AGONY_PP_PRIVATE_EVAL_REC_2293_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2294(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2294_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2294_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2294_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2294_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2294_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2294_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2294_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2294_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2294_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2294_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2295
#define AGONY_PP_PRIVATE_EVAL_REC_2294_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2295(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2295_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2295_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2295_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2295_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2295_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2295_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2295_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2295_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2295_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2295_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2296
#define AGONY_PP_PRIVATE_EVAL_REC_2295_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2296(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2296_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2296_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2296_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2296_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2296_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2296_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2296_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2296_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2296_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2296_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2297
#define AGONY_PP_PRIVATE_EVAL_REC_2296_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2297(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2297_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2297_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2297_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2297_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2297_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2297_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2297_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2297_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2297_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2297_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2298
#define AGONY_PP_PRIVATE_EVAL_REC_2297_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2298(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2298_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2298_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2298_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2298_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2298_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2298_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2298_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2298_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2298_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2298_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2299
#define AGONY_PP_PRIVATE_EVAL_REC_2298_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2299(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2299_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2299_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2299_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2299_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2299_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2299_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2299_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2299_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2299_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2299_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2300
#define AGONY_PP_PRIVATE_EVAL_REC_2299_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2300(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2300_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2300_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2300_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2300_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2300_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2300_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2300_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2300_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2300_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2300_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2301
#define AGONY_PP_PRIVATE_EVAL_REC_2300_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2301(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2301_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2301_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2301_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2301_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2301_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2301_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2301_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2301_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2301_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2301_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2302
#define AGONY_PP_PRIVATE_EVAL_REC_2301_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2302(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2302_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2302_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2302_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2302_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2302_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2302_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2302_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2302_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2302_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2302_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2303
#define AGONY_PP_PRIVATE_EVAL_REC_2302_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2303(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2303_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2303_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2303_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2303_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2303_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2303_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2303_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2303_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2303_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2303_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2304
#define AGONY_PP_PRIVATE_EVAL_REC_2303_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2304(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2304_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2304_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2304_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2304_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2304_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2304_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2304_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2304_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2304_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2304_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2305
#define AGONY_PP_PRIVATE_EVAL_REC_2304_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2305(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2305_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2305_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2305_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2305_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2305_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2305_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2305_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2305_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2305_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2305_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2306
#define AGONY_PP_PRIVATE_EVAL_REC_2305_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2306(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2306_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2306_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2306_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2306_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2306_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2306_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2306_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2306_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2306_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2306_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2307
#define AGONY_PP_PRIVATE_EVAL_REC_2306_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2307(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2307_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2307_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2307_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2307_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2307_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2307_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2307_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2307_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2307_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2307_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2308
#define AGONY_PP_PRIVATE_EVAL_REC_2307_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2308(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2308_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2308_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2308_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2308_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2308_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2308_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2308_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2308_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2308_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2308_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2309
#define AGONY_PP_PRIVATE_EVAL_REC_2308_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2309(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2309_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2309_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2309_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2309_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2309_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2309_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2309_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2309_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2309_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2309_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2310
#define AGONY_PP_PRIVATE_EVAL_REC_2309_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2310(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2310_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2310_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2310_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2310_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2310_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2310_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2310_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2310_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2310_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2310_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2311
#define AGONY_PP_PRIVATE_EVAL_REC_2310_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2311(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2311_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2311_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2311_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2311_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2311_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2311_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2311_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2311_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2311_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2311_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2312
#define AGONY_PP_PRIVATE_EVAL_REC_2311_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2312(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2312_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2312_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2312_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2312_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2312_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2312_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2312_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2312_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2312_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2312_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2313
#define AGONY_PP_PRIVATE_EVAL_REC_2312_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2313(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2313_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2313_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2313_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2313_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2313_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2313_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2313_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2313_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2313_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2313_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2314
#define AGONY_PP_PRIVATE_EVAL_REC_2313_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2314(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2314_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2314_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2314_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2314_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2314_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2314_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2314_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2314_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2314_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2314_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2315
#define AGONY_PP_PRIVATE_EVAL_REC_2314_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2315(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2315_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2315_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2315_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2315_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2315_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2315_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2315_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2315_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2315_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2315_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2316
#define AGONY_PP_PRIVATE_EVAL_REC_2315_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2316(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2316_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2316_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2316_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2316_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2316_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2316_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2316_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2316_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2316_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2316_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2317
#define AGONY_PP_PRIVATE_EVAL_REC_2316_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2317(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2317_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2317_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2317_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2317_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2317_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2317_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2317_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2317_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2317_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2317_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2318
#define AGONY_PP_PRIVATE_EVAL_REC_2317_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2318(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2318_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2318_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2318_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2318_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2318_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2318_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2318_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2318_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2318_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2318_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2319
#define AGONY_PP_PRIVATE_EVAL_REC_2318_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2319(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2319_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2319_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2319_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2319_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2319_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2319_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2319_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2319_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2319_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2319_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2320
#define AGONY_PP_PRIVATE_EVAL_REC_2319_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2320(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2320_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2320_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2320_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2320_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2320_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2320_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2320_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2320_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2320_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2320_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2321
#define AGONY_PP_PRIVATE_EVAL_REC_2320_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2321(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2321_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2321_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2321_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2321_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2321_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2321_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2321_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2321_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2321_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2321_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2322
#define AGONY_PP_PRIVATE_EVAL_REC_2321_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2322(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2322_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2322_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2322_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2322_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2322_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2322_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2322_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2322_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2322_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2322_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2323
#define AGONY_PP_PRIVATE_EVAL_REC_2322_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2323(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2323_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2323_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2323_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2323_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2323_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2323_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2323_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2323_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2323_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2323_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2324
#define AGONY_PP_PRIVATE_EVAL_REC_2323_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2324(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2324_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2324_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2324_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2324_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2324_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2324_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2324_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2324_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2324_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2324_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2325
#define AGONY_PP_PRIVATE_EVAL_REC_2324_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2325(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2325_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2325_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2325_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2325_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2325_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2325_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2325_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2325_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2325_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2325_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2326
#define AGONY_PP_PRIVATE_EVAL_REC_2325_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2326(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2326_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2326_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2326_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2326_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2326_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2326_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2326_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2326_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2326_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2326_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2327
#define AGONY_PP_PRIVATE_EVAL_REC_2326_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2327(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2327_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2327_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2327_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2327_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2327_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2327_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2327_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2327_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2327_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2327_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2328
#define AGONY_PP_PRIVATE_EVAL_REC_2327_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2328(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2328_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2328_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2328_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2328_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2328_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2328_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2328_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2328_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2328_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2328_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2329
#define AGONY_PP_PRIVATE_EVAL_REC_2328_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2329(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2329_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2329_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2329_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2329_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2329_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2329_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2329_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2329_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2329_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2329_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2330
#define AGONY_PP_PRIVATE_EVAL_REC_2329_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2330(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2330_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2330_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2330_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2330_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2330_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2330_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2330_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2330_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2330_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2330_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2331
#define AGONY_PP_PRIVATE_EVAL_REC_2330_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2331(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2331_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2331_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2331_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2331_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2331_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2331_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2331_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2331_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2331_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2331_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2332
#define AGONY_PP_PRIVATE_EVAL_REC_2331_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2332(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2332_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2332_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2332_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2332_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2332_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2332_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2332_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2332_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2332_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2332_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2333
#define AGONY_PP_PRIVATE_EVAL_REC_2332_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2333(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2333_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2333_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2333_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2333_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2333_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2333_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2333_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2333_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2333_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2333_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2334
#define AGONY_PP_PRIVATE_EVAL_REC_2333_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2334(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2334_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2334_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2334_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2334_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2334_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2334_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2334_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2334_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2334_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2334_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2335
#define AGONY_PP_PRIVATE_EVAL_REC_2334_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2335(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2335_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2335_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2335_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2335_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2335_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2335_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2335_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2335_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2335_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2335_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2336
#define AGONY_PP_PRIVATE_EVAL_REC_2335_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2336(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2336_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2336_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2336_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2336_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2336_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2336_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2336_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2336_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2336_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2336_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2337
#define AGONY_PP_PRIVATE_EVAL_REC_2336_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2337(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2337_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2337_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2337_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2337_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2337_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2337_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2337_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2337_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2337_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2337_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2338
#define AGONY_PP_PRIVATE_EVAL_REC_2337_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2338(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2338_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2338_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2338_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2338_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2338_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2338_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2338_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2338_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2338_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2338_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2339
#define AGONY_PP_PRIVATE_EVAL_REC_2338_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2339(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2339_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2339_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2339_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2339_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2339_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2339_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2339_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2339_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2339_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2339_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2340
#define AGONY_PP_PRIVATE_EVAL_REC_2339_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2340(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2340_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2340_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2340_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2340_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2340_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2340_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2340_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2340_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2340_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2340_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2341
#define AGONY_PP_PRIVATE_EVAL_REC_2340_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2341(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2341_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2341_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2341_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2341_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2341_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2341_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2341_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2341_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2341_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2341_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2342
#define AGONY_PP_PRIVATE_EVAL_REC_2341_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2342(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2342_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2342_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2342_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2342_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2342_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2342_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2342_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2342_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2342_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2342_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2343
#define AGONY_PP_PRIVATE_EVAL_REC_2342_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2343(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2343_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2343_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2343_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2343_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2343_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2343_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2343_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2343_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2343_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2343_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2344
#define AGONY_PP_PRIVATE_EVAL_REC_2343_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2344(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2344_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2344_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2344_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2344_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2344_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2344_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2344_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2344_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2344_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2344_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2345
#define AGONY_PP_PRIVATE_EVAL_REC_2344_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2345(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2345_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2345_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2345_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2345_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2345_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2345_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2345_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2345_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2345_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2345_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2346
#define AGONY_PP_PRIVATE_EVAL_REC_2345_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2346(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2346_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2346_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2346_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2346_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2346_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2346_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2346_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2346_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2346_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2346_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2347
#define AGONY_PP_PRIVATE_EVAL_REC_2346_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2347(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2347_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2347_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2347_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2347_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2347_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2347_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2347_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2347_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2347_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2347_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2348
#define AGONY_PP_PRIVATE_EVAL_REC_2347_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2348(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2348_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2348_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2348_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2348_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2348_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2348_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2348_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2348_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2348_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2348_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2349
#define AGONY_PP_PRIVATE_EVAL_REC_2348_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2349(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2349_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2349_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2349_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2349_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2349_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2349_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2349_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2349_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2349_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2349_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2350
#define AGONY_PP_PRIVATE_EVAL_REC_2349_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2350(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2350_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2350_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2350_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2350_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2350_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2350_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2350_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2350_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2350_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2350_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2351
#define AGONY_PP_PRIVATE_EVAL_REC_2350_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2351(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2351_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2351_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2351_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2351_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2351_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2351_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2351_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2351_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2351_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2351_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2352
#define AGONY_PP_PRIVATE_EVAL_REC_2351_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2352(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2352_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2352_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2352_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2352_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2352_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2352_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2352_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2352_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2352_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2352_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2353
#define AGONY_PP_PRIVATE_EVAL_REC_2352_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2353(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2353_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2353_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2353_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2353_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2353_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2353_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2353_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2353_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2353_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2353_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2354
#define AGONY_PP_PRIVATE_EVAL_REC_2353_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2354(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2354_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2354_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2354_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2354_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2354_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2354_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2354_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2354_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2354_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2354_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2355
#define AGONY_PP_PRIVATE_EVAL_REC_2354_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2355(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2355_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2355_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2355_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2355_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2355_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2355_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2355_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2355_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2355_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2355_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2356
#define AGONY_PP_PRIVATE_EVAL_REC_2355_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2356(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2356_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2356_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2356_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2356_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2356_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2356_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2356_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2356_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2356_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2356_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2357
#define AGONY_PP_PRIVATE_EVAL_REC_2356_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2357(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2357_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2357_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2357_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2357_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2357_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2357_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2357_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2357_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2357_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2357_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2358
#define AGONY_PP_PRIVATE_EVAL_REC_2357_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2358(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2358_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2358_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2358_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2358_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2358_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2358_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2358_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2358_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2358_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2358_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2359
#define AGONY_PP_PRIVATE_EVAL_REC_2358_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2359(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2359_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2359_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2359_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2359_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2359_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2359_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2359_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2359_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2359_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2359_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2360
#define AGONY_PP_PRIVATE_EVAL_REC_2359_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2360(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2360_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2360_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2360_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2360_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2360_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2360_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2360_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2360_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2360_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2360_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2361
#define AGONY_PP_PRIVATE_EVAL_REC_2360_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2361(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2361_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2361_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2361_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2361_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2361_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2361_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2361_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2361_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2361_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2361_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2362
#define AGONY_PP_PRIVATE_EVAL_REC_2361_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2362(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2362_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2362_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2362_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2362_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2362_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2362_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2362_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2362_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2362_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2362_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2363
#define AGONY_PP_PRIVATE_EVAL_REC_2362_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2363(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2363_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2363_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2363_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2363_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2363_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2363_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2363_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2363_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2363_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2363_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2364
#define AGONY_PP_PRIVATE_EVAL_REC_2363_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2364(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2364_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2364_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2364_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2364_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2364_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2364_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2364_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2364_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2364_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2364_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2365
#define AGONY_PP_PRIVATE_EVAL_REC_2364_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2365(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2365_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2365_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2365_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2365_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2365_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2365_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2365_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2365_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2365_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2365_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2366
#define AGONY_PP_PRIVATE_EVAL_REC_2365_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2366(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2366_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2366_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2366_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2366_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2366_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2366_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2366_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2366_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2366_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2366_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2367
#define AGONY_PP_PRIVATE_EVAL_REC_2366_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2367(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2367_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2367_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2367_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2367_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2367_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2367_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2367_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2367_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2367_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2367_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2368
#define AGONY_PP_PRIVATE_EVAL_REC_2367_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2368(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2368_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2368_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2368_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2368_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2368_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2368_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2368_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2368_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2368_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2368_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2369
#define AGONY_PP_PRIVATE_EVAL_REC_2368_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2369(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2369_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2369_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2369_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2369_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2369_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2369_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2369_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2369_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2369_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2369_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2370
#define AGONY_PP_PRIVATE_EVAL_REC_2369_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2370(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2370_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2370_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2370_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2370_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2370_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2370_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2370_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2370_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2370_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2370_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2371
#define AGONY_PP_PRIVATE_EVAL_REC_2370_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2371(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2371_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2371_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2371_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2371_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2371_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2371_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2371_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2371_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2371_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2371_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2372
#define AGONY_PP_PRIVATE_EVAL_REC_2371_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2372(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2372_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2372_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2372_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2372_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2372_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2372_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2372_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2372_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2372_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2372_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2373
#define AGONY_PP_PRIVATE_EVAL_REC_2372_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2373(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2373_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2373_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2373_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2373_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2373_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2373_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2373_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2373_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2373_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2373_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2374
#define AGONY_PP_PRIVATE_EVAL_REC_2373_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2374(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2374_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2374_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2374_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2374_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2374_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2374_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2374_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2374_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2374_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2374_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2375
#define AGONY_PP_PRIVATE_EVAL_REC_2374_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2375(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2375_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2375_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2375_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2375_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2375_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2375_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2375_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2375_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2375_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2375_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2376
#define AGONY_PP_PRIVATE_EVAL_REC_2375_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2376(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2376_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2376_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2376_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2376_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2376_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2376_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2376_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2376_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2376_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2376_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2377
#define AGONY_PP_PRIVATE_EVAL_REC_2376_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2377(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2377_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2377_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2377_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2377_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2377_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2377_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2377_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2377_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2377_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2377_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2378
#define AGONY_PP_PRIVATE_EVAL_REC_2377_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2378(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2378_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2378_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2378_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2378_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2378_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2378_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2378_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2378_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2378_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2378_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2379
#define AGONY_PP_PRIVATE_EVAL_REC_2378_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2379(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2379_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2379_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2379_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2379_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2379_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2379_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2379_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2379_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2379_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2379_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2380
#define AGONY_PP_PRIVATE_EVAL_REC_2379_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2380(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2380_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2380_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2380_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2380_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2380_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2380_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2380_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2380_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2380_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2380_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2381
#define AGONY_PP_PRIVATE_EVAL_REC_2380_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2381(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2381_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2381_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2381_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2381_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2381_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2381_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2381_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2381_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2381_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2381_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2382
#define AGONY_PP_PRIVATE_EVAL_REC_2381_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2382(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2382_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2382_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2382_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2382_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2382_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2382_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2382_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2382_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2382_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2382_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2383
#define AGONY_PP_PRIVATE_EVAL_REC_2382_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2383(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2383_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2383_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2383_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2383_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2383_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2383_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2383_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2383_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2383_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2383_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2384
#define AGONY_PP_PRIVATE_EVAL_REC_2383_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2384(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2384_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2384_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2384_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2384_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2384_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2384_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2384_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2384_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2384_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2384_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2385
#define AGONY_PP_PRIVATE_EVAL_REC_2384_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2385(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2385_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2385_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2385_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2385_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2385_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2385_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2385_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2385_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2385_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2385_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2386
#define AGONY_PP_PRIVATE_EVAL_REC_2385_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2386(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2386_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2386_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2386_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2386_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2386_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2386_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2386_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2386_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2386_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2386_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2387
#define AGONY_PP_PRIVATE_EVAL_REC_2386_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2387(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2387_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2387_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2387_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2387_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2387_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2387_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2387_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2387_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2387_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2387_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2388
#define AGONY_PP_PRIVATE_EVAL_REC_2387_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2388(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2388_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2388_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2388_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2388_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2388_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2388_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2388_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2388_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2388_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2388_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2389
#define AGONY_PP_PRIVATE_EVAL_REC_2388_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2389(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2389_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2389_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2389_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2389_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2389_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2389_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2389_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2389_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2389_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2389_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2390
#define AGONY_PP_PRIVATE_EVAL_REC_2389_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2390(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2390_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2390_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2390_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2390_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2390_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2390_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2390_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2390_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2390_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2390_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2391
#define AGONY_PP_PRIVATE_EVAL_REC_2390_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2391(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2391_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2391_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2391_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2391_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2391_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2391_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2391_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2391_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2391_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2391_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2392
#define AGONY_PP_PRIVATE_EVAL_REC_2391_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2392(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2392_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2392_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2392_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2392_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2392_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2392_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2392_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2392_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2392_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2392_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2393
#define AGONY_PP_PRIVATE_EVAL_REC_2392_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2393(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2393_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2393_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2393_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2393_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2393_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2393_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2393_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2393_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2393_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2393_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2394
#define AGONY_PP_PRIVATE_EVAL_REC_2393_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2394(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2394_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2394_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2394_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2394_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2394_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2394_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2394_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2394_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2394_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2394_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2395
#define AGONY_PP_PRIVATE_EVAL_REC_2394_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2395(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2395_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2395_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2395_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2395_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2395_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2395_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2395_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2395_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2395_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2395_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2396
#define AGONY_PP_PRIVATE_EVAL_REC_2395_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2396(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2396_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2396_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2396_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2396_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2396_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2396_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2396_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2396_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2396_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2396_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2397
#define AGONY_PP_PRIVATE_EVAL_REC_2396_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2397(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2397_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2397_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2397_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2397_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2397_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2397_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2397_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2397_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2397_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2397_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2398
#define AGONY_PP_PRIVATE_EVAL_REC_2397_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2398(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2398_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2398_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2398_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2398_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2398_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2398_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2398_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2398_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2398_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2398_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2399
#define AGONY_PP_PRIVATE_EVAL_REC_2398_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2399(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2399_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2399_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2399_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2399_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2399_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2399_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2399_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2399_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2399_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2399_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2400
#define AGONY_PP_PRIVATE_EVAL_REC_2399_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2400(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2400_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2400_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2400_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2400_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2400_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2400_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2400_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2400_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2400_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2400_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2401
#define AGONY_PP_PRIVATE_EVAL_REC_2400_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2401(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2401_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2401_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2401_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2401_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2401_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2401_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2401_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2401_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2401_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2401_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2402
#define AGONY_PP_PRIVATE_EVAL_REC_2401_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2402(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2402_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2402_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2402_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2402_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2402_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2402_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2402_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2402_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2402_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2402_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2403
#define AGONY_PP_PRIVATE_EVAL_REC_2402_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2403(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2403_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2403_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2403_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2403_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2403_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2403_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2403_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2403_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2403_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2403_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2404
#define AGONY_PP_PRIVATE_EVAL_REC_2403_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2404(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2404_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2404_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2404_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2404_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2404_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2404_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2404_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2404_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2404_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2404_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2405
#define AGONY_PP_PRIVATE_EVAL_REC_2404_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2405(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2405_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2405_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2405_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2405_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2405_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2405_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2405_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2405_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2405_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2405_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2406
#define AGONY_PP_PRIVATE_EVAL_REC_2405_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2406(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2406_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2406_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2406_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2406_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2406_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2406_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2406_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2406_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2406_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2406_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2407
#define AGONY_PP_PRIVATE_EVAL_REC_2406_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2407(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2407_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2407_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2407_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2407_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2407_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2407_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2407_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2407_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2407_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2407_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2408
#define AGONY_PP_PRIVATE_EVAL_REC_2407_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2408(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2408_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2408_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2408_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2408_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2408_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2408_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2408_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2408_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2408_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2408_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2409
#define AGONY_PP_PRIVATE_EVAL_REC_2408_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2409(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2409_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2409_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2409_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2409_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2409_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2409_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2409_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2409_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2409_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2409_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2410
#define AGONY_PP_PRIVATE_EVAL_REC_2409_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2410(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2410_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2410_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2410_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2410_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2410_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2410_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2410_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2410_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2410_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2410_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2411
#define AGONY_PP_PRIVATE_EVAL_REC_2410_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2411(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2411_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2411_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2411_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2411_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2411_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2411_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2411_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2411_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2411_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2411_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2412
#define AGONY_PP_PRIVATE_EVAL_REC_2411_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2412(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2412_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2412_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2412_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2412_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2412_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2412_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2412_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2412_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2412_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2412_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2413
#define AGONY_PP_PRIVATE_EVAL_REC_2412_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2413(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2413_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2413_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2413_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2413_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2413_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2413_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2413_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2413_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2413_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2413_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2414
#define AGONY_PP_PRIVATE_EVAL_REC_2413_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2414(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2414_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2414_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2414_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2414_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2414_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2414_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2414_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2414_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2414_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2414_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2415
#define AGONY_PP_PRIVATE_EVAL_REC_2414_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2415(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2415_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2415_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2415_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2415_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2415_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2415_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2415_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2415_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2415_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2415_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2416
#define AGONY_PP_PRIVATE_EVAL_REC_2415_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2416(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2416_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2416_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2416_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2416_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2416_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2416_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2416_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2416_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2416_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2416_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2417
#define AGONY_PP_PRIVATE_EVAL_REC_2416_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2417(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2417_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2417_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2417_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2417_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2417_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2417_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2417_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2417_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2417_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2417_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2418
#define AGONY_PP_PRIVATE_EVAL_REC_2417_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2418(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2418_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2418_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2418_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2418_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2418_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2418_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2418_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2418_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2418_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2418_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2419
#define AGONY_PP_PRIVATE_EVAL_REC_2418_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2419(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2419_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2419_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2419_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2419_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2419_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2419_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2419_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2419_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2419_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2419_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2420
#define AGONY_PP_PRIVATE_EVAL_REC_2419_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2420(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2420_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2420_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2420_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2420_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2420_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2420_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2420_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2420_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2420_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2420_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2421
#define AGONY_PP_PRIVATE_EVAL_REC_2420_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2421(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2421_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2421_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2421_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2421_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2421_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2421_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2421_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2421_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2421_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2421_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2422
#define AGONY_PP_PRIVATE_EVAL_REC_2421_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2422(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2422_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2422_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2422_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2422_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2422_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2422_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2422_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2422_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2422_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2422_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2423
#define AGONY_PP_PRIVATE_EVAL_REC_2422_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2423(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2423_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2423_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2423_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2423_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2423_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2423_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2423_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2423_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2423_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2423_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2424
#define AGONY_PP_PRIVATE_EVAL_REC_2423_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2424(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2424_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2424_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2424_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2424_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2424_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2424_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2424_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2424_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2424_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2424_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2425
#define AGONY_PP_PRIVATE_EVAL_REC_2424_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2425(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2425_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2425_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2425_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2425_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2425_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2425_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2425_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2425_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2425_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2425_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2426
#define AGONY_PP_PRIVATE_EVAL_REC_2425_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2426(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2426_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2426_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2426_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2426_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2426_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2426_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2426_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2426_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2426_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2426_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2427
#define AGONY_PP_PRIVATE_EVAL_REC_2426_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2427(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2427_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2427_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2427_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2427_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2427_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2427_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2427_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2427_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2427_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2427_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2428
#define AGONY_PP_PRIVATE_EVAL_REC_2427_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2428(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2428_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2428_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2428_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2428_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2428_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2428_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2428_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2428_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2428_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2428_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2429
#define AGONY_PP_PRIVATE_EVAL_REC_2428_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2429(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2429_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2429_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2429_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2429_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2429_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2429_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2429_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2429_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2429_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2429_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2430
#define AGONY_PP_PRIVATE_EVAL_REC_2429_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2430(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2430_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2430_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2430_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2430_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2430_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2430_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2430_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2430_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2430_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2430_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2431
#define AGONY_PP_PRIVATE_EVAL_REC_2430_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2431(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2431_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2431_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2431_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2431_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2431_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2431_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2431_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2431_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2431_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2431_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2432
#define AGONY_PP_PRIVATE_EVAL_REC_2431_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2432(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2432_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2432_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2432_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2432_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2432_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2432_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2432_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2432_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2432_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2432_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2433
#define AGONY_PP_PRIVATE_EVAL_REC_2432_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2433(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2433_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2433_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2433_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2433_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2433_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2433_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2433_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2433_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2433_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2433_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2434
#define AGONY_PP_PRIVATE_EVAL_REC_2433_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2434(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2434_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2434_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2434_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2434_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2434_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2434_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2434_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2434_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2434_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2434_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2435
#define AGONY_PP_PRIVATE_EVAL_REC_2434_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2435(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2435_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2435_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2435_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2435_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2435_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2435_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2435_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2435_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2435_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2435_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2436
#define AGONY_PP_PRIVATE_EVAL_REC_2435_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2436(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2436_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2436_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2436_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2436_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2436_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2436_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2436_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2436_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2436_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2436_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2437
#define AGONY_PP_PRIVATE_EVAL_REC_2436_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2437(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2437_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2437_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2437_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2437_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2437_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2437_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2437_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2437_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2437_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2437_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2438
#define AGONY_PP_PRIVATE_EVAL_REC_2437_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2438(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2438_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2438_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2438_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2438_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2438_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2438_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2438_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2438_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2438_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2438_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2439
#define AGONY_PP_PRIVATE_EVAL_REC_2438_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2439(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2439_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2439_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2439_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2439_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2439_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2439_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2439_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2439_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2439_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2439_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2440
#define AGONY_PP_PRIVATE_EVAL_REC_2439_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2440(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2440_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2440_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2440_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2440_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2440_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2440_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2440_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2440_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2440_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2440_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2441
#define AGONY_PP_PRIVATE_EVAL_REC_2440_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2441(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2441_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2441_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2441_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2441_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2441_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2441_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2441_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2441_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2441_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2441_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2442
#define AGONY_PP_PRIVATE_EVAL_REC_2441_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2442(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2442_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2442_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2442_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2442_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2442_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2442_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2442_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2442_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2442_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2442_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2443
#define AGONY_PP_PRIVATE_EVAL_REC_2442_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2443(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2443_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2443_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2443_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2443_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2443_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2443_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2443_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2443_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2443_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2443_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2444
#define AGONY_PP_PRIVATE_EVAL_REC_2443_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2444(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2444_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2444_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2444_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2444_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2444_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2444_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2444_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2444_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2444_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2444_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2445
#define AGONY_PP_PRIVATE_EVAL_REC_2444_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2445(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2445_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2445_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2445_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2445_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2445_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2445_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2445_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2445_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2445_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2445_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2446
#define AGONY_PP_PRIVATE_EVAL_REC_2445_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2446(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2446_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2446_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2446_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2446_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2446_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2446_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2446_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2446_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2446_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2446_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2447
#define AGONY_PP_PRIVATE_EVAL_REC_2446_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2447(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2447_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2447_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2447_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2447_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2447_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2447_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2447_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2447_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2447_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2447_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2448
#define AGONY_PP_PRIVATE_EVAL_REC_2447_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2448(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2448_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2448_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2448_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2448_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2448_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2448_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2448_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2448_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2448_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2448_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2449
#define AGONY_PP_PRIVATE_EVAL_REC_2448_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2449(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2449_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2449_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2449_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2449_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2449_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2449_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2449_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2449_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2449_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2449_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2450
#define AGONY_PP_PRIVATE_EVAL_REC_2449_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2450(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2450_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2450_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2450_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2450_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2450_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2450_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2450_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2450_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2450_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2450_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2451
#define AGONY_PP_PRIVATE_EVAL_REC_2450_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2451(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2451_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2451_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2451_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2451_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2451_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2451_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2451_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2451_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2451_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2451_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2452
#define AGONY_PP_PRIVATE_EVAL_REC_2451_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2452(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2452_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2452_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2452_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2452_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2452_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2452_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2452_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2452_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2452_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2452_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2453
#define AGONY_PP_PRIVATE_EVAL_REC_2452_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2453(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2453_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2453_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2453_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2453_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2453_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2453_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2453_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2453_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2453_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2453_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2454
#define AGONY_PP_PRIVATE_EVAL_REC_2453_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2454(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2454_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2454_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2454_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2454_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2454_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2454_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2454_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2454_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2454_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2454_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2455
#define AGONY_PP_PRIVATE_EVAL_REC_2454_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2455(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2455_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2455_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2455_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2455_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2455_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2455_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2455_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2455_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2455_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2455_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2456
#define AGONY_PP_PRIVATE_EVAL_REC_2455_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2456(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2456_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2456_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2456_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2456_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2456_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2456_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2456_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2456_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2456_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2456_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2457
#define AGONY_PP_PRIVATE_EVAL_REC_2456_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2457(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2457_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2457_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2457_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2457_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2457_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2457_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2457_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2457_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2457_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2457_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2458
#define AGONY_PP_PRIVATE_EVAL_REC_2457_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2458(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2458_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2458_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2458_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2458_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2458_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2458_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2458_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2458_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2458_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2458_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2459
#define AGONY_PP_PRIVATE_EVAL_REC_2458_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2459(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2459_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2459_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2459_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2459_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2459_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2459_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2459_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2459_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2459_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2459_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2460
#define AGONY_PP_PRIVATE_EVAL_REC_2459_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2460(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2460_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2460_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2460_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2460_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2460_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2460_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2460_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2460_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2460_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2460_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2461
#define AGONY_PP_PRIVATE_EVAL_REC_2460_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2461(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2461_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2461_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2461_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2461_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2461_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2461_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2461_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2461_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2461_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2461_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2462
#define AGONY_PP_PRIVATE_EVAL_REC_2461_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2462(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2462_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2462_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2462_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2462_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2462_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2462_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2462_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2462_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2462_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2462_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2463
#define AGONY_PP_PRIVATE_EVAL_REC_2462_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2463(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2463_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2463_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2463_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2463_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2463_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2463_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2463_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2463_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2463_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2463_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2464
#define AGONY_PP_PRIVATE_EVAL_REC_2463_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2464(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2464_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2464_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2464_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2464_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2464_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2464_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2464_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2464_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2464_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2464_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2465
#define AGONY_PP_PRIVATE_EVAL_REC_2464_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2465(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2465_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2465_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2465_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2465_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2465_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2465_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2465_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2465_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2465_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2465_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2466
#define AGONY_PP_PRIVATE_EVAL_REC_2465_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2466(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2466_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2466_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2466_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2466_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2466_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2466_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2466_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2466_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2466_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2466_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2467
#define AGONY_PP_PRIVATE_EVAL_REC_2466_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2467(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2467_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2467_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2467_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2467_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2467_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2467_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2467_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2467_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2467_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2467_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2468
#define AGONY_PP_PRIVATE_EVAL_REC_2467_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2468(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2468_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2468_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2468_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2468_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2468_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2468_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2468_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2468_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2468_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2468_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2469
#define AGONY_PP_PRIVATE_EVAL_REC_2468_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2469(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2469_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2469_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2469_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2469_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2469_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2469_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2469_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2469_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2469_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2469_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2470
#define AGONY_PP_PRIVATE_EVAL_REC_2469_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2470(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2470_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2470_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2470_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2470_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2470_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2470_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2470_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2470_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2470_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2470_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2471
#define AGONY_PP_PRIVATE_EVAL_REC_2470_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2471(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2471_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2471_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2471_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2471_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2471_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2471_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2471_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2471_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2471_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2471_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2472
#define AGONY_PP_PRIVATE_EVAL_REC_2471_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2472(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2472_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2472_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2472_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2472_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2472_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2472_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2472_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2472_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2472_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2472_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2473
#define AGONY_PP_PRIVATE_EVAL_REC_2472_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2473(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2473_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2473_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2473_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2473_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2473_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2473_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2473_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2473_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2473_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2473_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2474
#define AGONY_PP_PRIVATE_EVAL_REC_2473_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2474(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2474_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2474_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2474_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2474_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2474_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2474_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2474_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2474_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2474_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2474_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2475
#define AGONY_PP_PRIVATE_EVAL_REC_2474_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2475(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2475_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2475_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2475_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2475_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2475_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2475_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2475_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2475_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2475_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2475_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2476
#define AGONY_PP_PRIVATE_EVAL_REC_2475_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2476(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2476_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2476_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2476_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2476_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2476_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2476_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2476_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2476_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2476_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2476_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2477
#define AGONY_PP_PRIVATE_EVAL_REC_2476_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2477(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2477_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2477_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2477_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2477_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2477_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2477_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2477_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2477_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2477_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2477_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2478
#define AGONY_PP_PRIVATE_EVAL_REC_2477_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2478(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2478_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2478_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2478_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2478_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2478_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2478_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2478_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2478_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2478_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2478_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2479
#define AGONY_PP_PRIVATE_EVAL_REC_2478_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2479(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2479_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2479_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2479_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2479_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2479_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2479_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2479_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2479_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2479_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2479_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2480
#define AGONY_PP_PRIVATE_EVAL_REC_2479_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2480(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2480_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2480_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2480_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2480_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2480_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2480_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2480_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2480_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2480_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2480_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2481
#define AGONY_PP_PRIVATE_EVAL_REC_2480_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2481(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2481_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2481_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2481_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2481_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2481_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2481_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2481_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2481_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2481_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2481_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2482
#define AGONY_PP_PRIVATE_EVAL_REC_2481_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2482(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2482_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2482_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2482_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2482_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2482_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2482_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2482_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2482_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2482_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2482_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2483
#define AGONY_PP_PRIVATE_EVAL_REC_2482_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2483(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2483_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2483_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2483_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2483_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2483_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2483_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2483_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2483_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2483_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2483_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2484
#define AGONY_PP_PRIVATE_EVAL_REC_2483_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2484(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2484_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2484_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2484_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2484_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2484_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2484_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2484_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2484_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2484_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2484_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2485
#define AGONY_PP_PRIVATE_EVAL_REC_2484_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2485(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2485_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2485_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2485_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2485_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2485_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2485_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2485_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2485_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2485_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2485_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2486
#define AGONY_PP_PRIVATE_EVAL_REC_2485_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2486(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2486_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2486_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2486_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2486_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2486_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2486_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2486_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2486_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2486_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2486_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2487
#define AGONY_PP_PRIVATE_EVAL_REC_2486_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2487(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2487_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2487_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2487_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2487_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2487_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2487_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2487_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2487_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2487_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2487_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2488
#define AGONY_PP_PRIVATE_EVAL_REC_2487_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2488(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2488_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2488_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2488_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2488_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2488_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2488_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2488_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2488_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2488_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2488_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2489
#define AGONY_PP_PRIVATE_EVAL_REC_2488_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2489(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2489_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2489_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2489_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2489_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2489_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2489_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2489_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2489_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2489_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2489_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2490
#define AGONY_PP_PRIVATE_EVAL_REC_2489_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2490(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2490_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2490_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2490_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2490_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2490_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2490_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2490_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2490_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2490_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2490_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2491
#define AGONY_PP_PRIVATE_EVAL_REC_2490_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2491(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2491_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2491_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2491_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2491_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2491_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2491_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2491_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2491_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2491_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2491_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2492
#define AGONY_PP_PRIVATE_EVAL_REC_2491_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2492(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2492_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2492_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2492_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2492_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2492_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2492_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2492_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2492_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2492_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2492_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2493
#define AGONY_PP_PRIVATE_EVAL_REC_2492_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2493(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2493_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2493_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2493_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2493_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2493_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2493_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2493_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2493_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2493_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2493_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2494
#define AGONY_PP_PRIVATE_EVAL_REC_2493_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2494(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2494_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2494_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2494_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2494_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2494_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2494_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2494_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2494_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2494_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2494_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2495
#define AGONY_PP_PRIVATE_EVAL_REC_2494_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2495(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2495_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2495_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2495_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2495_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2495_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2495_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2495_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2495_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2495_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2495_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2496
#define AGONY_PP_PRIVATE_EVAL_REC_2495_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2496(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2496_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2496_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2496_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2496_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2496_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2496_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2496_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2496_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2496_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2496_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2497
#define AGONY_PP_PRIVATE_EVAL_REC_2496_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2497(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2497_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2497_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2497_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2497_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2497_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2497_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2497_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2497_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2497_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2497_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2498
#define AGONY_PP_PRIVATE_EVAL_REC_2497_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2498(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2498_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2498_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2498_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2498_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2498_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2498_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2498_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2498_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2498_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2498_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2499
#define AGONY_PP_PRIVATE_EVAL_REC_2498_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2499(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2499_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2499_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2499_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2499_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2499_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2499_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2499_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2499_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2499_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2499_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2500
#define AGONY_PP_PRIVATE_EVAL_REC_2499_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2500(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2500_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2500_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2500_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2500_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2500_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2500_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2500_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2500_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2500_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2500_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2501
#define AGONY_PP_PRIVATE_EVAL_REC_2500_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2501(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2501_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2501_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2501_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2501_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2501_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2501_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2501_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2501_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2501_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2501_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2502
#define AGONY_PP_PRIVATE_EVAL_REC_2501_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2502(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2502_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2502_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2502_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2502_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2502_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2502_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2502_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2502_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2502_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2502_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2503
#define AGONY_PP_PRIVATE_EVAL_REC_2502_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2503(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2503_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2503_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2503_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2503_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2503_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2503_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2503_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2503_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2503_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2503_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2504
#define AGONY_PP_PRIVATE_EVAL_REC_2503_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2504(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2504_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2504_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2504_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2504_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2504_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2504_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2504_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2504_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2504_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2504_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2505
#define AGONY_PP_PRIVATE_EVAL_REC_2504_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2505(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2505_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2505_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2505_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2505_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2505_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2505_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2505_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2505_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2505_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2505_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2506
#define AGONY_PP_PRIVATE_EVAL_REC_2505_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2506(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2506_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2506_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2506_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2506_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2506_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2506_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2506_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2506_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2506_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2506_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2507
#define AGONY_PP_PRIVATE_EVAL_REC_2506_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2507(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2507_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2507_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2507_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2507_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2507_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2507_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2507_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2507_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2507_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2507_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2508
#define AGONY_PP_PRIVATE_EVAL_REC_2507_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2508(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2508_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2508_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2508_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2508_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2508_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2508_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2508_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2508_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2508_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2508_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2509
#define AGONY_PP_PRIVATE_EVAL_REC_2508_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2509(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2509_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2509_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2509_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2509_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2509_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2509_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2509_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2509_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2509_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2509_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2510
#define AGONY_PP_PRIVATE_EVAL_REC_2509_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2510(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2510_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2510_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2510_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2510_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2510_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2510_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2510_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2510_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2510_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2510_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2511
#define AGONY_PP_PRIVATE_EVAL_REC_2510_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2511(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2511_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2511_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2511_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2511_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2511_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2511_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2511_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2511_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2511_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2511_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2512
#define AGONY_PP_PRIVATE_EVAL_REC_2511_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2512(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2512_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2512_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2512_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2512_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2512_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2512_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2512_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2512_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2512_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2512_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2513
#define AGONY_PP_PRIVATE_EVAL_REC_2512_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2513(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2513_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2513_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2513_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2513_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2513_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2513_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2513_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2513_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2513_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2513_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2514
#define AGONY_PP_PRIVATE_EVAL_REC_2513_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2514(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2514_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2514_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2514_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2514_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2514_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2514_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2514_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2514_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2514_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2514_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2515
#define AGONY_PP_PRIVATE_EVAL_REC_2514_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2515(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2515_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2515_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2515_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2515_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2515_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2515_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2515_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2515_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2515_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2515_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2516
#define AGONY_PP_PRIVATE_EVAL_REC_2515_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2516(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2516_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2516_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2516_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2516_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2516_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2516_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2516_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2516_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2516_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2516_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2517
#define AGONY_PP_PRIVATE_EVAL_REC_2516_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2517(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2517_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2517_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2517_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2517_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2517_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2517_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2517_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2517_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2517_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2517_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2518
#define AGONY_PP_PRIVATE_EVAL_REC_2517_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2518(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2518_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2518_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2518_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2518_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2518_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2518_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2518_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2518_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2518_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2518_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2519
#define AGONY_PP_PRIVATE_EVAL_REC_2518_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2519(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2519_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2519_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2519_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2519_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2519_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2519_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2519_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2519_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2519_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2519_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2520
#define AGONY_PP_PRIVATE_EVAL_REC_2519_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2520(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2520_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2520_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2520_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2520_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2520_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2520_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2520_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2520_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2520_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2520_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2521
#define AGONY_PP_PRIVATE_EVAL_REC_2520_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2521(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2521_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2521_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2521_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2521_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2521_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2521_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2521_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2521_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2521_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2521_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2522
#define AGONY_PP_PRIVATE_EVAL_REC_2521_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2522(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2522_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2522_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2522_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2522_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2522_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2522_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2522_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2522_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2522_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2522_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2523
#define AGONY_PP_PRIVATE_EVAL_REC_2522_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2523(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2523_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2523_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2523_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2523_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2523_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2523_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2523_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2523_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2523_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2523_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2524
#define AGONY_PP_PRIVATE_EVAL_REC_2523_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2524(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2524_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2524_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2524_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2524_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2524_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2524_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2524_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2524_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2524_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2524_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2525
#define AGONY_PP_PRIVATE_EVAL_REC_2524_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2525(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2525_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2525_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2525_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2525_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2525_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2525_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2525_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2525_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2525_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2525_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2526
#define AGONY_PP_PRIVATE_EVAL_REC_2525_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2526(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2526_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2526_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2526_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2526_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2526_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2526_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2526_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2526_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2526_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2526_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2527
#define AGONY_PP_PRIVATE_EVAL_REC_2526_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2527(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2527_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2527_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2527_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2527_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2527_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2527_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2527_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2527_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2527_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2527_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2528
#define AGONY_PP_PRIVATE_EVAL_REC_2527_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2528(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2528_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2528_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2528_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2528_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2528_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2528_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2528_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2528_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2528_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2528_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2529
#define AGONY_PP_PRIVATE_EVAL_REC_2528_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2529(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2529_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2529_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2529_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2529_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2529_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2529_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2529_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2529_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2529_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2529_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2530
#define AGONY_PP_PRIVATE_EVAL_REC_2529_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2530(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2530_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2530_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2530_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2530_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2530_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2530_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2530_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2530_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2530_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2530_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2531
#define AGONY_PP_PRIVATE_EVAL_REC_2530_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2531(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2531_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2531_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2531_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2531_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2531_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2531_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2531_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2531_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2531_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2531_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2532
#define AGONY_PP_PRIVATE_EVAL_REC_2531_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2532(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2532_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2532_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2532_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2532_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2532_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2532_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2532_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2532_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2532_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2532_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2533
#define AGONY_PP_PRIVATE_EVAL_REC_2532_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2533(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2533_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2533_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2533_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2533_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2533_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2533_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2533_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2533_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2533_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2533_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2534
#define AGONY_PP_PRIVATE_EVAL_REC_2533_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2534(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2534_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2534_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2534_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2534_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2534_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2534_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2534_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2534_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2534_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2534_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2535
#define AGONY_PP_PRIVATE_EVAL_REC_2534_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2535(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2535_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2535_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2535_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2535_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2535_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2535_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2535_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2535_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2535_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2535_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2536
#define AGONY_PP_PRIVATE_EVAL_REC_2535_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2536(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2536_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2536_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2536_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2536_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2536_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2536_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2536_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2536_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2536_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2536_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2537
#define AGONY_PP_PRIVATE_EVAL_REC_2536_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2537(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2537_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2537_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2537_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2537_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2537_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2537_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2537_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2537_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2537_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2537_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2538
#define AGONY_PP_PRIVATE_EVAL_REC_2537_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2538(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2538_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2538_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2538_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2538_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2538_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2538_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2538_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2538_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2538_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2538_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2539
#define AGONY_PP_PRIVATE_EVAL_REC_2538_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2539(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2539_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2539_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2539_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2539_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2539_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2539_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2539_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2539_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2539_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2539_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2540
#define AGONY_PP_PRIVATE_EVAL_REC_2539_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2540(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2540_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2540_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2540_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2540_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2540_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2540_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2540_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2540_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2540_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2540_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2541
#define AGONY_PP_PRIVATE_EVAL_REC_2540_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2541(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2541_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2541_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2541_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2541_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2541_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2541_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2541_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2541_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2541_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2541_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2542
#define AGONY_PP_PRIVATE_EVAL_REC_2541_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2542(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2542_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2542_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2542_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2542_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2542_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2542_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2542_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2542_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2542_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2542_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2543
#define AGONY_PP_PRIVATE_EVAL_REC_2542_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2543(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2543_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2543_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2543_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2543_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2543_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2543_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2543_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2543_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2543_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2543_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2544
#define AGONY_PP_PRIVATE_EVAL_REC_2543_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2544(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2544_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2544_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2544_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2544_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2544_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2544_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2544_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2544_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2544_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2544_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2545
#define AGONY_PP_PRIVATE_EVAL_REC_2544_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2545(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2545_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2545_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2545_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2545_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2545_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2545_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2545_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2545_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2545_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2545_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2546
#define AGONY_PP_PRIVATE_EVAL_REC_2545_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2546(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2546_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2546_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2546_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2546_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2546_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2546_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2546_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2546_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2546_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2546_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2547
#define AGONY_PP_PRIVATE_EVAL_REC_2546_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2547(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2547_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2547_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2547_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2547_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2547_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2547_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2547_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2547_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2547_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2547_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2548
#define AGONY_PP_PRIVATE_EVAL_REC_2547_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2548(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2548_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2548_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2548_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2548_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2548_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2548_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2548_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2548_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2548_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2548_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2549
#define AGONY_PP_PRIVATE_EVAL_REC_2548_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2549(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2549_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2549_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2549_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2549_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2549_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2549_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2549_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2549_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2549_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2549_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2550
#define AGONY_PP_PRIVATE_EVAL_REC_2549_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2550(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2550_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2550_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2550_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2550_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2550_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2550_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2550_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2550_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2550_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2550_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2551
#define AGONY_PP_PRIVATE_EVAL_REC_2550_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2551(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2551_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2551_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2551_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2551_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2551_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2551_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2551_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2551_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2551_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2551_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2552
#define AGONY_PP_PRIVATE_EVAL_REC_2551_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2552(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2552_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2552_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2552_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2552_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2552_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2552_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2552_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2552_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2552_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2552_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2553
#define AGONY_PP_PRIVATE_EVAL_REC_2552_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2553(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2553_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2553_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2553_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2553_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2553_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2553_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2553_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2553_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2553_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2553_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2554
#define AGONY_PP_PRIVATE_EVAL_REC_2553_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2554(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2554_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2554_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2554_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2554_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2554_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2554_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2554_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2554_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2554_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2554_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2555
#define AGONY_PP_PRIVATE_EVAL_REC_2554_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2555(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2555_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2555_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2555_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2555_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2555_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2555_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2555_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2555_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2555_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2555_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2556
#define AGONY_PP_PRIVATE_EVAL_REC_2555_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2556(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2556_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2556_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2556_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2556_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2556_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2556_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2556_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2556_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2556_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2556_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2557
#define AGONY_PP_PRIVATE_EVAL_REC_2556_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2557(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2557_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2557_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2557_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2557_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2557_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2557_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2557_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2557_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2557_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2557_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2558
#define AGONY_PP_PRIVATE_EVAL_REC_2557_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2558(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2558_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2558_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2558_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2558_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2558_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2558_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2558_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2558_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2558_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2558_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2559
#define AGONY_PP_PRIVATE_EVAL_REC_2558_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2559(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2559_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2559_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2559_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2559_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2559_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2559_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2559_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2559_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2559_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2559_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2560
#define AGONY_PP_PRIVATE_EVAL_REC_2559_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2560(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2560_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2560_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2560_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2560_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2560_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2560_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2560_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2560_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2560_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2560_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2561
#define AGONY_PP_PRIVATE_EVAL_REC_2560_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2561(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2561_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2561_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2561_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2561_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2561_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2561_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2561_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2561_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2561_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2561_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2562
#define AGONY_PP_PRIVATE_EVAL_REC_2561_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2562(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2562_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2562_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2562_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2562_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2562_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2562_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2562_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2562_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2562_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2562_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2563
#define AGONY_PP_PRIVATE_EVAL_REC_2562_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2563(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2563_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2563_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2563_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2563_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2563_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2563_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2563_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2563_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2563_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2563_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2564
#define AGONY_PP_PRIVATE_EVAL_REC_2563_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2564(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2564_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2564_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2564_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2564_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2564_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2564_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2564_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2564_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2564_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2564_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2565
#define AGONY_PP_PRIVATE_EVAL_REC_2564_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2565(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2565_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2565_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2565_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2565_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2565_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2565_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2565_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2565_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2565_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2565_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2566
#define AGONY_PP_PRIVATE_EVAL_REC_2565_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2566(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2566_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2566_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2566_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2566_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2566_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2566_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2566_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2566_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2566_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2566_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2567
#define AGONY_PP_PRIVATE_EVAL_REC_2566_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2567(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2567_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2567_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2567_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2567_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2567_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2567_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2567_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2567_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2567_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2567_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2568
#define AGONY_PP_PRIVATE_EVAL_REC_2567_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2568(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2568_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2568_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2568_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2568_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2568_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2568_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2568_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2568_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2568_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2568_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2569
#define AGONY_PP_PRIVATE_EVAL_REC_2568_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2569(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2569_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2569_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2569_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2569_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2569_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2569_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2569_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2569_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2569_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2569_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2570
#define AGONY_PP_PRIVATE_EVAL_REC_2569_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2570(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2570_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2570_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2570_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2570_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2570_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2570_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2570_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2570_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2570_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2570_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2571
#define AGONY_PP_PRIVATE_EVAL_REC_2570_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2571(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2571_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2571_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2571_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2571_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2571_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2571_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2571_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2571_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2571_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2571_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2572
#define AGONY_PP_PRIVATE_EVAL_REC_2571_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2572(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2572_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2572_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2572_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2572_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2572_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2572_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2572_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2572_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2572_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2572_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2573
#define AGONY_PP_PRIVATE_EVAL_REC_2572_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2573(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2573_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2573_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2573_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2573_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2573_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2573_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2573_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2573_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2573_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2573_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2574
#define AGONY_PP_PRIVATE_EVAL_REC_2573_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2574(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2574_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2574_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2574_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2574_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2574_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2574_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2574_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2574_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2574_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2574_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2575
#define AGONY_PP_PRIVATE_EVAL_REC_2574_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2575(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2575_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2575_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2575_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2575_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2575_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2575_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2575_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2575_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2575_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2575_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2576
#define AGONY_PP_PRIVATE_EVAL_REC_2575_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2576(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2576_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2576_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2576_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2576_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2576_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2576_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2576_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2576_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2576_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2576_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2577
#define AGONY_PP_PRIVATE_EVAL_REC_2576_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2577(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2577_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2577_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2577_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2577_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2577_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2577_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2577_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2577_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2577_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2577_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2578
#define AGONY_PP_PRIVATE_EVAL_REC_2577_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2578(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2578_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2578_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2578_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2578_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2578_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2578_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2578_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2578_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2578_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2578_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2579
#define AGONY_PP_PRIVATE_EVAL_REC_2578_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2579(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2579_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2579_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2579_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2579_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2579_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2579_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2579_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2579_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2579_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2579_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2580
#define AGONY_PP_PRIVATE_EVAL_REC_2579_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2580(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2580_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2580_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2580_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2580_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2580_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2580_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2580_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2580_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2580_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2580_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2581
#define AGONY_PP_PRIVATE_EVAL_REC_2580_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2581(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2581_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2581_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2581_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2581_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2581_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2581_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2581_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2581_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2581_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2581_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2582
#define AGONY_PP_PRIVATE_EVAL_REC_2581_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2582(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2582_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2582_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2582_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2582_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2582_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2582_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2582_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2582_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2582_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2582_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2583
#define AGONY_PP_PRIVATE_EVAL_REC_2582_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2583(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2583_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2583_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2583_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2583_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2583_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2583_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2583_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2583_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2583_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2583_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2584
#define AGONY_PP_PRIVATE_EVAL_REC_2583_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2584(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2584_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2584_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2584_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2584_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2584_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2584_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2584_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2584_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2584_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2584_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2585
#define AGONY_PP_PRIVATE_EVAL_REC_2584_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2585(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2585_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2585_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2585_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2585_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2585_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2585_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2585_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2585_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2585_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2585_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2586
#define AGONY_PP_PRIVATE_EVAL_REC_2585_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2586(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2586_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2586_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2586_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2586_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2586_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2586_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2586_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2586_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2586_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2586_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2587
#define AGONY_PP_PRIVATE_EVAL_REC_2586_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2587(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2587_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2587_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2587_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2587_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2587_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2587_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2587_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2587_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2587_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2587_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2588
#define AGONY_PP_PRIVATE_EVAL_REC_2587_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2588(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2588_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2588_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2588_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2588_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2588_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2588_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2588_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2588_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2588_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2588_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2589
#define AGONY_PP_PRIVATE_EVAL_REC_2588_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2589(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2589_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2589_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2589_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2589_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2589_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2589_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2589_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2589_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2589_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2589_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2590
#define AGONY_PP_PRIVATE_EVAL_REC_2589_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2590(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2590_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2590_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2590_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2590_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2590_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2590_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2590_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2590_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2590_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2590_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2591
#define AGONY_PP_PRIVATE_EVAL_REC_2590_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2591(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2591_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2591_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2591_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2591_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2591_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2591_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2591_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2591_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2591_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2591_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2592
#define AGONY_PP_PRIVATE_EVAL_REC_2591_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2592(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2592_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2592_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2592_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2592_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2592_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2592_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2592_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2592_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2592_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2592_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2593
#define AGONY_PP_PRIVATE_EVAL_REC_2592_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2593(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2593_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2593_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2593_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2593_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2593_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2593_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2593_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2593_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2593_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2593_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2594
#define AGONY_PP_PRIVATE_EVAL_REC_2593_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2594(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2594_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2594_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2594_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2594_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2594_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2594_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2594_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2594_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2594_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2594_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2595
#define AGONY_PP_PRIVATE_EVAL_REC_2594_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2595(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2595_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2595_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2595_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2595_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2595_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2595_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2595_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2595_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2595_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2595_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2596
#define AGONY_PP_PRIVATE_EVAL_REC_2595_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2596(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2596_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2596_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2596_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2596_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2596_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2596_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2596_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2596_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2596_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2596_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2597
#define AGONY_PP_PRIVATE_EVAL_REC_2596_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2597(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2597_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2597_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2597_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2597_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2597_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2597_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2597_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2597_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2597_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2597_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2598
#define AGONY_PP_PRIVATE_EVAL_REC_2597_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2598(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2598_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2598_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2598_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2598_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2598_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2598_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2598_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2598_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2598_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2598_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2599
#define AGONY_PP_PRIVATE_EVAL_REC_2598_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2599(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2599_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2599_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2599_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2599_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2599_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2599_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2599_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2599_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2599_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2599_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2600
#define AGONY_PP_PRIVATE_EVAL_REC_2599_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2600(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2600_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2600_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2600_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2600_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2600_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2600_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2600_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2600_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2600_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2600_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2601
#define AGONY_PP_PRIVATE_EVAL_REC_2600_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2601(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2601_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2601_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2601_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2601_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2601_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2601_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2601_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2601_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2601_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2601_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2602
#define AGONY_PP_PRIVATE_EVAL_REC_2601_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2602(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2602_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2602_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2602_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2602_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2602_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2602_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2602_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2602_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2602_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2602_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2603
#define AGONY_PP_PRIVATE_EVAL_REC_2602_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2603(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2603_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2603_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2603_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2603_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2603_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2603_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2603_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2603_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2603_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2603_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2604
#define AGONY_PP_PRIVATE_EVAL_REC_2603_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2604(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2604_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2604_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2604_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2604_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2604_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2604_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2604_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2604_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2604_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2604_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2605
#define AGONY_PP_PRIVATE_EVAL_REC_2604_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2605(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2605_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2605_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2605_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2605_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2605_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2605_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2605_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2605_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2605_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2605_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2606
#define AGONY_PP_PRIVATE_EVAL_REC_2605_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2606(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2606_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2606_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2606_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2606_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2606_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2606_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2606_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2606_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2606_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2606_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2607
#define AGONY_PP_PRIVATE_EVAL_REC_2606_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2607(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2607_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2607_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2607_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2607_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2607_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2607_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2607_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2607_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2607_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2607_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2608
#define AGONY_PP_PRIVATE_EVAL_REC_2607_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2608(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2608_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2608_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2608_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2608_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2608_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2608_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2608_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2608_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2608_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2608_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2609
#define AGONY_PP_PRIVATE_EVAL_REC_2608_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2609(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2609_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2609_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2609_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2609_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2609_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2609_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2609_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2609_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2609_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2609_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2610
#define AGONY_PP_PRIVATE_EVAL_REC_2609_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2610(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2610_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2610_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2610_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2610_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2610_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2610_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2610_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2610_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2610_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2610_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2611
#define AGONY_PP_PRIVATE_EVAL_REC_2610_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2611(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2611_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2611_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2611_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2611_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2611_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2611_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2611_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2611_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2611_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2611_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2612
#define AGONY_PP_PRIVATE_EVAL_REC_2611_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2612(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2612_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2612_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2612_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2612_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2612_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2612_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2612_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2612_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2612_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2612_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2613
#define AGONY_PP_PRIVATE_EVAL_REC_2612_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2613(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2613_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2613_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2613_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2613_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2613_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2613_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2613_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2613_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2613_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2613_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2614
#define AGONY_PP_PRIVATE_EVAL_REC_2613_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2614(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2614_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2614_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2614_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2614_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2614_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2614_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2614_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2614_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2614_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2614_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2615
#define AGONY_PP_PRIVATE_EVAL_REC_2614_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2615(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2615_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2615_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2615_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2615_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2615_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2615_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2615_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2615_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2615_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2615_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2616
#define AGONY_PP_PRIVATE_EVAL_REC_2615_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2616(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2616_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2616_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2616_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2616_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2616_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2616_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2616_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2616_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2616_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2616_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2617
#define AGONY_PP_PRIVATE_EVAL_REC_2616_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2617(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2617_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2617_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2617_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2617_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2617_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2617_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2617_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2617_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2617_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2617_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2618
#define AGONY_PP_PRIVATE_EVAL_REC_2617_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2618(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2618_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2618_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2618_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2618_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2618_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2618_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2618_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2618_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2618_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2618_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2619
#define AGONY_PP_PRIVATE_EVAL_REC_2618_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2619(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2619_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2619_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2619_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2619_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2619_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2619_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2619_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2619_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2619_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2619_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2620
#define AGONY_PP_PRIVATE_EVAL_REC_2619_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2620(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2620_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2620_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2620_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2620_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2620_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2620_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2620_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2620_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2620_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2620_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2621
#define AGONY_PP_PRIVATE_EVAL_REC_2620_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2621(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2621_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2621_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2621_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2621_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2621_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2621_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2621_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2621_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2621_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2621_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2622
#define AGONY_PP_PRIVATE_EVAL_REC_2621_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2622(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2622_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2622_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2622_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2622_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2622_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2622_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2622_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2622_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2622_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2622_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2623
#define AGONY_PP_PRIVATE_EVAL_REC_2622_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2623(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2623_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2623_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2623_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2623_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2623_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2623_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2623_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2623_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2623_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2623_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2624
#define AGONY_PP_PRIVATE_EVAL_REC_2623_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2624(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2624_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2624_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2624_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2624_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2624_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2624_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2624_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2624_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2624_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2624_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2625
#define AGONY_PP_PRIVATE_EVAL_REC_2624_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2625(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2625_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2625_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2625_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2625_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2625_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2625_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2625_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2625_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2625_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2625_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2626
#define AGONY_PP_PRIVATE_EVAL_REC_2625_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2626(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2626_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2626_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2626_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2626_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2626_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2626_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2626_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2626_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2626_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2626_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2627
#define AGONY_PP_PRIVATE_EVAL_REC_2626_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2627(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2627_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2627_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2627_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2627_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2627_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2627_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2627_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2627_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2627_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2627_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2628
#define AGONY_PP_PRIVATE_EVAL_REC_2627_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2628(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2628_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2628_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2628_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2628_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2628_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2628_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2628_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2628_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2628_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2628_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2629
#define AGONY_PP_PRIVATE_EVAL_REC_2628_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2629(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2629_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2629_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2629_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2629_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2629_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2629_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2629_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2629_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2629_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2629_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2630
#define AGONY_PP_PRIVATE_EVAL_REC_2629_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2630(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2630_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2630_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2630_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2630_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2630_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2630_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2630_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2630_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2630_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2630_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2631
#define AGONY_PP_PRIVATE_EVAL_REC_2630_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2631(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2631_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2631_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2631_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2631_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2631_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2631_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2631_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2631_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2631_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2631_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2632
#define AGONY_PP_PRIVATE_EVAL_REC_2631_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2632(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2632_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2632_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2632_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2632_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2632_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2632_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2632_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2632_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2632_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2632_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2633
#define AGONY_PP_PRIVATE_EVAL_REC_2632_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2633(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2633_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2633_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2633_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2633_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2633_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2633_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2633_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2633_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2633_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2633_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2634
#define AGONY_PP_PRIVATE_EVAL_REC_2633_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2634(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2634_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2634_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2634_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2634_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2634_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2634_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2634_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2634_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2634_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2634_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2635
#define AGONY_PP_PRIVATE_EVAL_REC_2634_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2635(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2635_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2635_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2635_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2635_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2635_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2635_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2635_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2635_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2635_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2635_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2636
#define AGONY_PP_PRIVATE_EVAL_REC_2635_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2636(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2636_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2636_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2636_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2636_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2636_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2636_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2636_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2636_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2636_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2636_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2637
#define AGONY_PP_PRIVATE_EVAL_REC_2636_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2637(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2637_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2637_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2637_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2637_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2637_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2637_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2637_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2637_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2637_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2637_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2638
#define AGONY_PP_PRIVATE_EVAL_REC_2637_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2638(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2638_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2638_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2638_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2638_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2638_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2638_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2638_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2638_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2638_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2638_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2639
#define AGONY_PP_PRIVATE_EVAL_REC_2638_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2639(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2639_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2639_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2639_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2639_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2639_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2639_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2639_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2639_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2639_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2639_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2640
#define AGONY_PP_PRIVATE_EVAL_REC_2639_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2640(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2640_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2640_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2640_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2640_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2640_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2640_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2640_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2640_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2640_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2640_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2641
#define AGONY_PP_PRIVATE_EVAL_REC_2640_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2641(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2641_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2641_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2641_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2641_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2641_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2641_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2641_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2641_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2641_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2641_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2642
#define AGONY_PP_PRIVATE_EVAL_REC_2641_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2642(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2642_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2642_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2642_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2642_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2642_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2642_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2642_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2642_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2642_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2642_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2643
#define AGONY_PP_PRIVATE_EVAL_REC_2642_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2643(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2643_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2643_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2643_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2643_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2643_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2643_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2643_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2643_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2643_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2643_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2644
#define AGONY_PP_PRIVATE_EVAL_REC_2643_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2644(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2644_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2644_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2644_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2644_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2644_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2644_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2644_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2644_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2644_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2644_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2645
#define AGONY_PP_PRIVATE_EVAL_REC_2644_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2645(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2645_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2645_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2645_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2645_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2645_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2645_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2645_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2645_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2645_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2645_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2646
#define AGONY_PP_PRIVATE_EVAL_REC_2645_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2646(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2646_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2646_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2646_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2646_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2646_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2646_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2646_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2646_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2646_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2646_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2647
#define AGONY_PP_PRIVATE_EVAL_REC_2646_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2647(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2647_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2647_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2647_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2647_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2647_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2647_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2647_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2647_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2647_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2647_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2648
#define AGONY_PP_PRIVATE_EVAL_REC_2647_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2648(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2648_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2648_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2648_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2648_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2648_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2648_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2648_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2648_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2648_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2648_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2649
#define AGONY_PP_PRIVATE_EVAL_REC_2648_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2649(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2649_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2649_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2649_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2649_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2649_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2649_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2649_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2649_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2649_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2649_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2650
#define AGONY_PP_PRIVATE_EVAL_REC_2649_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2650(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2650_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2650_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2650_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2650_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2650_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2650_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2650_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2650_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2650_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2650_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2651
#define AGONY_PP_PRIVATE_EVAL_REC_2650_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2651(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2651_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2651_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2651_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2651_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2651_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2651_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2651_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2651_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2651_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2651_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2652
#define AGONY_PP_PRIVATE_EVAL_REC_2651_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2652(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2652_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2652_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2652_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2652_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2652_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2652_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2652_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2652_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2652_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2652_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2653
#define AGONY_PP_PRIVATE_EVAL_REC_2652_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2653(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2653_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2653_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2653_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2653_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2653_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2653_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2653_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2653_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2653_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2653_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2654
#define AGONY_PP_PRIVATE_EVAL_REC_2653_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2654(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2654_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2654_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2654_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2654_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2654_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2654_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2654_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2654_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2654_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2654_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2655
#define AGONY_PP_PRIVATE_EVAL_REC_2654_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2655(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2655_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2655_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2655_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2655_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2655_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2655_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2655_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2655_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2655_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2655_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2656
#define AGONY_PP_PRIVATE_EVAL_REC_2655_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2656(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2656_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2656_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2656_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2656_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2656_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2656_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2656_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2656_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2656_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2656_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2657
#define AGONY_PP_PRIVATE_EVAL_REC_2656_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2657(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2657_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2657_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2657_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2657_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2657_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2657_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2657_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2657_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2657_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2657_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2658
#define AGONY_PP_PRIVATE_EVAL_REC_2657_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2658(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2658_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2658_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2658_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2658_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2658_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2658_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2658_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2658_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2658_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2658_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2659
#define AGONY_PP_PRIVATE_EVAL_REC_2658_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2659(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2659_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2659_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2659_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2659_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2659_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2659_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2659_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2659_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2659_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2659_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2660
#define AGONY_PP_PRIVATE_EVAL_REC_2659_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2660(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2660_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2660_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2660_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2660_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2660_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2660_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2660_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2660_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2660_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2660_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2661
#define AGONY_PP_PRIVATE_EVAL_REC_2660_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2661(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2661_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2661_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2661_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2661_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2661_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2661_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2661_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2661_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2661_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2661_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2662
#define AGONY_PP_PRIVATE_EVAL_REC_2661_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2662(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2662_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2662_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2662_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2662_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2662_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2662_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2662_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2662_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2662_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2662_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2663
#define AGONY_PP_PRIVATE_EVAL_REC_2662_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2663(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2663_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2663_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2663_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2663_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2663_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2663_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2663_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2663_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2663_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2663_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2664
#define AGONY_PP_PRIVATE_EVAL_REC_2663_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2664(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2664_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2664_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2664_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2664_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2664_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2664_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2664_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2664_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2664_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2664_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2665
#define AGONY_PP_PRIVATE_EVAL_REC_2664_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2665(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2665_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2665_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2665_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2665_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2665_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2665_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2665_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2665_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2665_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2665_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2666
#define AGONY_PP_PRIVATE_EVAL_REC_2665_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2666(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2666_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2666_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2666_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2666_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2666_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2666_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2666_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2666_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2666_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2666_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2667
#define AGONY_PP_PRIVATE_EVAL_REC_2666_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2667(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2667_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2667_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2667_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2667_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2667_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2667_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2667_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2667_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2667_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2667_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2668
#define AGONY_PP_PRIVATE_EVAL_REC_2667_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2668(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2668_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2668_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2668_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2668_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2668_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2668_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2668_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2668_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2668_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2668_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2669
#define AGONY_PP_PRIVATE_EVAL_REC_2668_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2669(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2669_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2669_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2669_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2669_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2669_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2669_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2669_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2669_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2669_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2669_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2670
#define AGONY_PP_PRIVATE_EVAL_REC_2669_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2670(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2670_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2670_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2670_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2670_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2670_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2670_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2670_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2670_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2670_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2670_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2671
#define AGONY_PP_PRIVATE_EVAL_REC_2670_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2671(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2671_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2671_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2671_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2671_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2671_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2671_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2671_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2671_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2671_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2671_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2672
#define AGONY_PP_PRIVATE_EVAL_REC_2671_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2672(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2672_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2672_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2672_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2672_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2672_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2672_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2672_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2672_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2672_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2672_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2673
#define AGONY_PP_PRIVATE_EVAL_REC_2672_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2673(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2673_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2673_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2673_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2673_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2673_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2673_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2673_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2673_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2673_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2673_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2674
#define AGONY_PP_PRIVATE_EVAL_REC_2673_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2674(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2674_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2674_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2674_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2674_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2674_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2674_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2674_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2674_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2674_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2674_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2675
#define AGONY_PP_PRIVATE_EVAL_REC_2674_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2675(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2675_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2675_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2675_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2675_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2675_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2675_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2675_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2675_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2675_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2675_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2676
#define AGONY_PP_PRIVATE_EVAL_REC_2675_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2676(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2676_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2676_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2676_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2676_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2676_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2676_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2676_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2676_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2676_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2676_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2677
#define AGONY_PP_PRIVATE_EVAL_REC_2676_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2677(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2677_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2677_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2677_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2677_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2677_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2677_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2677_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2677_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2677_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2677_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2678
#define AGONY_PP_PRIVATE_EVAL_REC_2677_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2678(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2678_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2678_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2678_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2678_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2678_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2678_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2678_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2678_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2678_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2678_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2679
#define AGONY_PP_PRIVATE_EVAL_REC_2678_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2679(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2679_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2679_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2679_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2679_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2679_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2679_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2679_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2679_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2679_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2679_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2680
#define AGONY_PP_PRIVATE_EVAL_REC_2679_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2680(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2680_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2680_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2680_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2680_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2680_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2680_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2680_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2680_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2680_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2680_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2681
#define AGONY_PP_PRIVATE_EVAL_REC_2680_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2681(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2681_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2681_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2681_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2681_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2681_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2681_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2681_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2681_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2681_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2681_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2682
#define AGONY_PP_PRIVATE_EVAL_REC_2681_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2682(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2682_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2682_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2682_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2682_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2682_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2682_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2682_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2682_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2682_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2682_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2683
#define AGONY_PP_PRIVATE_EVAL_REC_2682_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2683(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2683_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2683_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2683_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2683_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2683_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2683_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2683_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2683_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2683_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2683_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2684
#define AGONY_PP_PRIVATE_EVAL_REC_2683_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2684(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2684_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2684_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2684_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2684_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2684_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2684_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2684_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2684_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2684_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2684_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2685
#define AGONY_PP_PRIVATE_EVAL_REC_2684_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2685(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2685_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2685_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2685_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2685_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2685_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2685_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2685_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2685_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2685_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2685_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2686
#define AGONY_PP_PRIVATE_EVAL_REC_2685_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2686(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2686_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2686_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2686_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2686_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2686_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2686_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2686_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2686_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2686_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2686_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2687
#define AGONY_PP_PRIVATE_EVAL_REC_2686_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2687(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2687_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2687_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2687_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2687_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2687_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2687_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2687_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2687_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2687_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2687_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2688
#define AGONY_PP_PRIVATE_EVAL_REC_2687_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2688(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2688_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2688_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2688_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2688_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2688_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2688_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2688_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2688_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2688_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2688_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2689
#define AGONY_PP_PRIVATE_EVAL_REC_2688_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2689(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2689_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2689_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2689_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2689_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2689_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2689_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2689_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2689_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2689_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2689_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2690
#define AGONY_PP_PRIVATE_EVAL_REC_2689_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2690(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2690_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2690_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2690_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2690_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2690_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2690_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2690_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2690_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2690_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2690_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2691
#define AGONY_PP_PRIVATE_EVAL_REC_2690_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2691(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2691_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2691_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2691_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2691_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2691_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2691_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2691_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2691_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2691_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2691_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2692
#define AGONY_PP_PRIVATE_EVAL_REC_2691_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2692(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2692_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2692_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2692_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2692_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2692_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2692_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2692_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2692_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2692_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2692_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2693
#define AGONY_PP_PRIVATE_EVAL_REC_2692_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2693(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2693_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2693_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2693_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2693_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2693_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2693_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2693_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2693_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2693_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2693_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2694
#define AGONY_PP_PRIVATE_EVAL_REC_2693_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2694(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2694_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2694_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2694_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2694_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2694_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2694_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2694_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2694_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2694_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2694_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2695
#define AGONY_PP_PRIVATE_EVAL_REC_2694_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2695(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2695_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2695_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2695_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2695_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2695_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2695_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2695_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2695_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2695_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2695_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2696
#define AGONY_PP_PRIVATE_EVAL_REC_2695_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2696(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2696_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2696_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2696_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2696_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2696_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2696_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2696_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2696_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2696_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2696_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2697
#define AGONY_PP_PRIVATE_EVAL_REC_2696_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2697(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2697_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2697_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2697_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2697_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2697_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2697_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2697_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2697_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2697_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2697_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2698
#define AGONY_PP_PRIVATE_EVAL_REC_2697_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2698(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2698_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2698_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2698_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2698_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2698_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2698_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2698_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2698_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2698_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2698_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2699
#define AGONY_PP_PRIVATE_EVAL_REC_2698_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2699(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2699_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2699_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2699_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2699_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2699_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2699_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2699_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2699_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2699_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2699_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2700
#define AGONY_PP_PRIVATE_EVAL_REC_2699_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2700(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2700_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2700_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2700_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2700_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2700_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2700_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2700_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2700_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2700_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2700_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2701
#define AGONY_PP_PRIVATE_EVAL_REC_2700_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2701(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2701_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2701_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2701_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2701_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2701_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2701_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2701_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2701_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2701_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2701_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2702
#define AGONY_PP_PRIVATE_EVAL_REC_2701_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2702(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2702_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2702_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2702_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2702_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2702_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2702_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2702_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2702_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2702_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2702_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2703
#define AGONY_PP_PRIVATE_EVAL_REC_2702_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2703(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2703_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2703_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2703_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2703_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2703_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2703_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2703_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2703_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2703_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2703_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2704
#define AGONY_PP_PRIVATE_EVAL_REC_2703_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2704(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2704_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2704_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2704_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2704_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2704_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2704_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2704_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2704_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2704_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2704_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2705
#define AGONY_PP_PRIVATE_EVAL_REC_2704_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2705(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2705_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2705_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2705_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2705_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2705_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2705_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2705_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2705_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2705_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2705_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2706
#define AGONY_PP_PRIVATE_EVAL_REC_2705_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2706(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2706_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2706_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2706_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2706_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2706_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2706_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2706_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2706_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2706_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2706_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2707
#define AGONY_PP_PRIVATE_EVAL_REC_2706_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2707(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2707_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2707_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2707_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2707_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2707_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2707_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2707_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2707_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2707_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2707_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2708
#define AGONY_PP_PRIVATE_EVAL_REC_2707_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2708(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2708_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2708_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2708_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2708_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2708_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2708_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2708_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2708_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2708_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2708_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2709
#define AGONY_PP_PRIVATE_EVAL_REC_2708_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2709(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2709_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2709_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2709_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2709_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2709_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2709_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2709_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2709_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2709_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2709_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2710
#define AGONY_PP_PRIVATE_EVAL_REC_2709_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2710(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2710_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2710_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2710_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2710_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2710_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2710_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2710_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2710_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2710_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2710_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2711
#define AGONY_PP_PRIVATE_EVAL_REC_2710_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2711(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2711_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2711_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2711_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2711_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2711_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2711_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2711_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2711_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2711_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2711_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2712
#define AGONY_PP_PRIVATE_EVAL_REC_2711_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2712(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2712_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2712_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2712_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2712_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2712_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2712_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2712_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2712_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2712_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2712_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2713
#define AGONY_PP_PRIVATE_EVAL_REC_2712_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2713(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2713_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2713_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2713_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2713_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2713_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2713_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2713_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2713_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2713_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2713_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2714
#define AGONY_PP_PRIVATE_EVAL_REC_2713_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2714(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2714_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2714_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2714_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2714_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2714_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2714_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2714_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2714_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2714_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2714_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2715
#define AGONY_PP_PRIVATE_EVAL_REC_2714_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2715(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2715_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2715_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2715_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2715_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2715_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2715_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2715_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2715_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2715_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2715_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2716
#define AGONY_PP_PRIVATE_EVAL_REC_2715_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2716(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2716_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2716_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2716_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2716_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2716_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2716_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2716_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2716_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2716_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2716_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2717
#define AGONY_PP_PRIVATE_EVAL_REC_2716_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2717(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2717_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2717_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2717_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2717_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2717_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2717_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2717_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2717_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2717_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2717_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2718
#define AGONY_PP_PRIVATE_EVAL_REC_2717_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2718(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2718_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2718_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2718_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2718_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2718_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2718_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2718_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2718_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2718_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2718_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2719
#define AGONY_PP_PRIVATE_EVAL_REC_2718_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2719(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2719_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2719_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2719_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2719_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2719_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2719_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2719_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2719_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2719_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2719_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2720
#define AGONY_PP_PRIVATE_EVAL_REC_2719_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2720(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2720_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2720_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2720_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2720_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2720_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2720_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2720_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2720_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2720_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2720_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2721
#define AGONY_PP_PRIVATE_EVAL_REC_2720_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2721(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2721_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2721_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2721_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2721_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2721_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2721_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2721_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2721_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2721_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2721_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2722
#define AGONY_PP_PRIVATE_EVAL_REC_2721_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2722(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2722_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2722_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2722_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2722_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2722_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2722_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2722_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2722_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2722_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2722_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2723
#define AGONY_PP_PRIVATE_EVAL_REC_2722_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2723(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2723_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2723_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2723_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2723_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2723_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2723_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2723_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2723_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2723_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2723_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2724
#define AGONY_PP_PRIVATE_EVAL_REC_2723_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2724(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2724_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2724_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2724_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2724_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2724_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2724_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2724_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2724_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2724_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2724_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2725
#define AGONY_PP_PRIVATE_EVAL_REC_2724_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2725(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2725_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2725_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2725_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2725_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2725_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2725_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2725_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2725_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2725_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2725_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2726
#define AGONY_PP_PRIVATE_EVAL_REC_2725_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2726(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2726_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2726_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2726_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2726_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2726_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2726_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2726_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2726_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2726_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2726_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2727
#define AGONY_PP_PRIVATE_EVAL_REC_2726_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2727(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2727_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2727_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2727_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2727_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2727_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2727_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2727_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2727_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2727_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2727_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2728
#define AGONY_PP_PRIVATE_EVAL_REC_2727_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2728(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2728_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2728_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2728_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2728_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2728_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2728_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2728_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2728_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2728_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2728_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2729
#define AGONY_PP_PRIVATE_EVAL_REC_2728_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2729(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2729_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2729_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2729_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2729_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2729_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2729_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2729_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2729_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2729_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2729_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2730
#define AGONY_PP_PRIVATE_EVAL_REC_2729_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2730(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2730_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2730_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2730_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2730_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2730_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2730_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2730_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2730_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2730_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2730_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2731
#define AGONY_PP_PRIVATE_EVAL_REC_2730_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2731(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2731_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2731_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2731_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2731_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2731_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2731_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2731_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2731_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2731_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2731_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2732
#define AGONY_PP_PRIVATE_EVAL_REC_2731_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2732(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2732_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2732_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2732_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2732_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2732_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2732_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2732_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2732_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2732_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2732_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2733
#define AGONY_PP_PRIVATE_EVAL_REC_2732_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2733(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2733_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2733_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2733_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2733_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2733_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2733_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2733_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2733_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2733_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2733_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2734
#define AGONY_PP_PRIVATE_EVAL_REC_2733_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2734(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2734_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2734_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2734_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2734_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2734_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2734_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2734_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2734_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2734_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2734_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2735
#define AGONY_PP_PRIVATE_EVAL_REC_2734_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2735(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2735_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2735_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2735_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2735_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2735_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2735_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2735_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2735_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2735_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2735_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2736
#define AGONY_PP_PRIVATE_EVAL_REC_2735_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2736(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2736_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2736_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2736_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2736_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2736_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2736_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2736_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2736_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2736_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2736_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2737
#define AGONY_PP_PRIVATE_EVAL_REC_2736_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2737(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2737_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2737_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2737_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2737_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2737_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2737_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2737_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2737_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2737_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2737_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2738
#define AGONY_PP_PRIVATE_EVAL_REC_2737_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2738(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2738_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2738_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2738_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2738_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2738_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2738_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2738_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2738_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2738_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2738_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2739
#define AGONY_PP_PRIVATE_EVAL_REC_2738_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2739(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2739_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2739_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2739_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2739_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2739_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2739_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2739_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2739_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2739_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2739_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2740
#define AGONY_PP_PRIVATE_EVAL_REC_2739_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2740(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2740_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2740_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2740_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2740_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2740_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2740_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2740_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2740_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2740_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2740_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2741
#define AGONY_PP_PRIVATE_EVAL_REC_2740_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2741(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2741_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2741_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2741_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2741_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2741_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2741_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2741_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2741_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2741_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2741_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2742
#define AGONY_PP_PRIVATE_EVAL_REC_2741_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2742(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2742_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2742_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2742_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2742_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2742_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2742_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2742_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2742_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2742_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2742_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2743
#define AGONY_PP_PRIVATE_EVAL_REC_2742_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2743(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2743_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2743_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2743_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2743_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2743_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2743_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2743_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2743_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2743_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2743_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2744
#define AGONY_PP_PRIVATE_EVAL_REC_2743_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2744(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2744_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2744_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2744_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2744_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2744_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2744_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2744_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2744_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2744_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2744_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2745
#define AGONY_PP_PRIVATE_EVAL_REC_2744_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2745(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2745_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2745_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2745_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2745_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2745_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2745_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2745_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2745_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2745_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2745_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2746
#define AGONY_PP_PRIVATE_EVAL_REC_2745_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2746(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2746_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2746_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2746_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2746_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2746_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2746_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2746_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2746_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2746_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2746_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2747
#define AGONY_PP_PRIVATE_EVAL_REC_2746_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2747(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2747_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2747_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2747_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2747_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2747_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2747_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2747_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2747_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2747_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2747_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2748
#define AGONY_PP_PRIVATE_EVAL_REC_2747_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2748(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2748_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2748_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2748_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2748_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2748_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2748_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2748_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2748_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2748_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2748_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2749
#define AGONY_PP_PRIVATE_EVAL_REC_2748_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2749(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2749_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2749_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2749_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2749_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2749_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2749_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2749_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2749_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2749_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2749_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2750
#define AGONY_PP_PRIVATE_EVAL_REC_2749_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2750(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2750_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2750_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2750_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2750_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2750_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2750_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2750_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2750_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2750_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2750_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2751
#define AGONY_PP_PRIVATE_EVAL_REC_2750_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2751(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2751_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2751_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2751_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2751_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2751_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2751_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2751_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2751_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2751_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2751_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2752
#define AGONY_PP_PRIVATE_EVAL_REC_2751_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2752(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2752_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2752_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2752_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2752_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2752_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2752_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2752_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2752_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2752_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2752_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2753
#define AGONY_PP_PRIVATE_EVAL_REC_2752_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2753(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2753_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2753_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2753_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2753_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2753_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2753_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2753_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2753_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2753_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2753_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2754
#define AGONY_PP_PRIVATE_EVAL_REC_2753_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2754(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2754_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2754_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2754_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2754_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2754_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2754_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2754_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2754_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2754_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2754_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2755
#define AGONY_PP_PRIVATE_EVAL_REC_2754_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2755(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2755_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2755_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2755_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2755_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2755_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2755_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2755_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2755_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2755_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2755_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2756
#define AGONY_PP_PRIVATE_EVAL_REC_2755_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2756(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2756_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2756_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2756_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2756_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2756_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2756_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2756_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2756_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2756_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2756_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2757
#define AGONY_PP_PRIVATE_EVAL_REC_2756_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2757(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2757_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2757_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2757_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2757_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2757_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2757_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2757_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2757_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2757_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2757_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2758
#define AGONY_PP_PRIVATE_EVAL_REC_2757_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2758(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2758_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2758_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2758_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2758_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2758_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2758_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2758_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2758_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2758_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2758_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2759
#define AGONY_PP_PRIVATE_EVAL_REC_2758_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2759(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2759_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2759_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2759_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2759_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2759_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2759_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2759_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2759_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2759_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2759_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2760
#define AGONY_PP_PRIVATE_EVAL_REC_2759_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2760(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2760_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2760_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2760_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2760_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2760_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2760_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2760_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2760_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2760_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2760_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2761
#define AGONY_PP_PRIVATE_EVAL_REC_2760_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2761(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2761_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2761_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2761_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2761_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2761_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2761_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2761_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2761_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2761_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2761_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2762
#define AGONY_PP_PRIVATE_EVAL_REC_2761_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2762(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2762_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2762_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2762_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2762_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2762_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2762_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2762_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2762_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2762_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2762_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2763
#define AGONY_PP_PRIVATE_EVAL_REC_2762_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2763(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2763_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2763_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2763_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2763_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2763_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2763_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2763_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2763_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2763_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2763_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2764
#define AGONY_PP_PRIVATE_EVAL_REC_2763_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2764(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2764_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2764_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2764_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2764_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2764_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2764_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2764_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2764_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2764_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2764_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2765
#define AGONY_PP_PRIVATE_EVAL_REC_2764_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2765(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2765_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2765_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2765_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2765_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2765_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2765_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2765_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2765_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2765_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2765_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2766
#define AGONY_PP_PRIVATE_EVAL_REC_2765_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2766(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2766_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2766_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2766_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2766_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2766_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2766_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2766_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2766_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2766_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2766_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2767
#define AGONY_PP_PRIVATE_EVAL_REC_2766_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2767(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2767_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2767_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2767_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2767_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2767_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2767_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2767_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2767_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2767_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2767_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2768
#define AGONY_PP_PRIVATE_EVAL_REC_2767_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2768(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2768_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2768_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2768_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2768_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2768_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2768_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2768_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2768_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2768_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2768_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2769
#define AGONY_PP_PRIVATE_EVAL_REC_2768_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2769(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2769_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2769_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2769_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2769_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2769_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2769_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2769_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2769_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2769_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2769_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2770
#define AGONY_PP_PRIVATE_EVAL_REC_2769_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2770(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2770_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2770_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2770_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2770_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2770_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2770_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2770_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2770_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2770_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2770_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2771
#define AGONY_PP_PRIVATE_EVAL_REC_2770_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2771(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2771_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2771_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2771_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2771_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2771_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2771_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2771_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2771_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2771_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2771_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2772
#define AGONY_PP_PRIVATE_EVAL_REC_2771_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2772(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2772_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2772_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2772_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2772_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2772_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2772_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2772_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2772_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2772_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2772_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2773
#define AGONY_PP_PRIVATE_EVAL_REC_2772_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2773(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2773_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2773_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2773_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2773_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2773_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2773_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2773_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2773_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2773_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2773_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2774
#define AGONY_PP_PRIVATE_EVAL_REC_2773_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2774(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2774_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2774_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2774_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2774_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2774_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2774_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2774_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2774_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2774_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2774_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2775
#define AGONY_PP_PRIVATE_EVAL_REC_2774_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2775(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2775_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2775_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2775_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2775_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2775_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2775_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2775_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2775_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2775_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2775_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2776
#define AGONY_PP_PRIVATE_EVAL_REC_2775_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2776(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2776_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2776_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2776_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2776_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2776_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2776_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2776_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2776_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2776_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2776_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2777
#define AGONY_PP_PRIVATE_EVAL_REC_2776_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2777(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2777_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2777_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2777_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2777_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2777_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2777_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2777_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2777_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2777_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2777_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2778
#define AGONY_PP_PRIVATE_EVAL_REC_2777_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2778(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2778_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2778_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2778_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2778_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2778_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2778_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2778_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2778_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2778_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2778_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2779
#define AGONY_PP_PRIVATE_EVAL_REC_2778_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2779(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2779_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2779_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2779_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2779_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2779_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2779_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2779_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2779_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2779_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2779_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2780
#define AGONY_PP_PRIVATE_EVAL_REC_2779_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2780(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2780_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2780_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2780_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2780_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2780_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2780_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2780_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2780_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2780_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2780_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2781
#define AGONY_PP_PRIVATE_EVAL_REC_2780_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2781(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2781_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2781_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2781_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2781_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2781_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2781_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2781_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2781_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2781_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2781_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2782
#define AGONY_PP_PRIVATE_EVAL_REC_2781_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2782(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2782_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2782_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2782_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2782_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2782_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2782_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2782_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2782_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2782_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2782_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2783
#define AGONY_PP_PRIVATE_EVAL_REC_2782_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2783(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2783_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2783_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2783_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2783_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2783_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2783_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2783_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2783_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2783_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2783_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2784
#define AGONY_PP_PRIVATE_EVAL_REC_2783_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2784(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2784_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2784_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2784_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2784_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2784_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2784_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2784_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2784_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2784_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2784_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2785
#define AGONY_PP_PRIVATE_EVAL_REC_2784_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2785(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2785_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2785_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2785_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2785_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2785_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2785_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2785_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2785_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2785_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2785_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2786
#define AGONY_PP_PRIVATE_EVAL_REC_2785_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2786(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2786_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2786_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2786_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2786_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2786_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2786_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2786_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2786_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2786_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2786_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2787
#define AGONY_PP_PRIVATE_EVAL_REC_2786_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2787(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2787_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2787_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2787_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2787_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2787_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2787_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2787_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2787_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2787_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2787_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2788
#define AGONY_PP_PRIVATE_EVAL_REC_2787_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2788(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2788_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2788_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2788_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2788_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2788_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2788_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2788_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2788_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2788_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2788_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2789
#define AGONY_PP_PRIVATE_EVAL_REC_2788_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2789(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2789_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2789_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2789_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2789_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2789_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2789_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2789_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2789_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2789_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2789_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2790
#define AGONY_PP_PRIVATE_EVAL_REC_2789_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2790(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2790_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2790_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2790_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2790_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2790_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2790_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2790_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2790_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2790_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2790_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2791
#define AGONY_PP_PRIVATE_EVAL_REC_2790_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2791(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2791_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2791_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2791_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2791_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2791_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2791_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2791_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2791_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2791_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2791_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2792
#define AGONY_PP_PRIVATE_EVAL_REC_2791_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2792(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2792_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2792_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2792_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2792_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2792_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2792_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2792_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2792_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2792_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2792_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2793
#define AGONY_PP_PRIVATE_EVAL_REC_2792_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2793(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2793_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2793_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2793_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2793_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2793_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2793_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2793_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2793_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2793_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2793_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2794
#define AGONY_PP_PRIVATE_EVAL_REC_2793_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2794(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2794_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2794_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2794_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2794_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2794_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2794_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2794_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2794_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2794_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2794_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2795
#define AGONY_PP_PRIVATE_EVAL_REC_2794_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2795(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2795_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2795_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2795_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2795_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2795_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2795_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2795_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2795_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2795_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2795_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2796
#define AGONY_PP_PRIVATE_EVAL_REC_2795_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2796(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2796_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2796_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2796_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2796_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2796_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2796_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2796_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2796_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2796_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2796_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2797
#define AGONY_PP_PRIVATE_EVAL_REC_2796_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2797(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2797_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2797_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2797_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2797_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2797_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2797_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2797_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2797_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2797_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2797_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2798
#define AGONY_PP_PRIVATE_EVAL_REC_2797_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2798(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2798_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2798_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2798_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2798_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2798_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2798_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2798_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2798_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2798_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2798_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2799
#define AGONY_PP_PRIVATE_EVAL_REC_2798_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2799(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2799_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2799_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2799_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2799_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2799_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2799_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2799_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2799_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2799_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2799_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2800
#define AGONY_PP_PRIVATE_EVAL_REC_2799_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2800(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2800_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2800_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2800_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2800_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2800_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2800_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2800_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2800_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2800_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2800_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2801
#define AGONY_PP_PRIVATE_EVAL_REC_2800_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2801(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2801_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2801_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2801_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2801_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2801_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2801_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2801_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2801_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2801_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2801_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2802
#define AGONY_PP_PRIVATE_EVAL_REC_2801_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2802(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2802_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2802_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2802_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2802_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2802_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2802_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2802_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2802_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2802_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2802_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2803
#define AGONY_PP_PRIVATE_EVAL_REC_2802_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2803(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2803_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2803_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2803_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2803_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2803_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2803_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2803_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2803_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2803_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2803_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2804
#define AGONY_PP_PRIVATE_EVAL_REC_2803_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2804(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2804_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2804_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2804_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2804_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2804_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2804_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2804_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2804_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2804_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2804_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2805
#define AGONY_PP_PRIVATE_EVAL_REC_2804_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2805(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2805_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2805_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2805_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2805_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2805_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2805_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2805_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2805_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2805_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2805_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2806
#define AGONY_PP_PRIVATE_EVAL_REC_2805_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2806(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2806_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2806_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2806_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2806_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2806_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2806_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2806_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2806_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2806_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2806_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2807
#define AGONY_PP_PRIVATE_EVAL_REC_2806_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2807(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2807_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2807_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2807_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2807_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2807_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2807_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2807_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2807_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2807_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2807_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2808
#define AGONY_PP_PRIVATE_EVAL_REC_2807_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2808(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2808_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2808_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2808_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2808_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2808_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2808_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2808_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2808_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2808_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2808_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2809
#define AGONY_PP_PRIVATE_EVAL_REC_2808_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2809(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2809_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2809_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2809_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2809_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2809_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2809_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2809_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2809_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2809_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2809_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2810
#define AGONY_PP_PRIVATE_EVAL_REC_2809_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2810(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2810_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2810_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2810_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2810_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2810_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2810_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2810_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2810_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2810_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2810_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2811
#define AGONY_PP_PRIVATE_EVAL_REC_2810_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2811(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2811_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2811_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2811_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2811_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2811_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2811_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2811_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2811_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2811_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2811_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2812
#define AGONY_PP_PRIVATE_EVAL_REC_2811_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2812(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2812_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2812_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2812_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2812_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2812_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2812_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2812_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2812_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2812_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2812_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2813
#define AGONY_PP_PRIVATE_EVAL_REC_2812_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2813(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2813_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2813_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2813_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2813_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2813_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2813_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2813_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2813_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2813_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2813_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2814
#define AGONY_PP_PRIVATE_EVAL_REC_2813_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2814(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2814_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2814_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2814_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2814_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2814_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2814_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2814_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2814_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2814_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2814_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2815
#define AGONY_PP_PRIVATE_EVAL_REC_2814_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2815(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2815_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2815_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2815_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2815_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2815_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2815_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2815_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2815_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2815_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2815_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2816
#define AGONY_PP_PRIVATE_EVAL_REC_2815_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2816(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2816_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2816_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2816_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2816_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2816_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2816_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2816_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2816_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2816_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2816_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2817
#define AGONY_PP_PRIVATE_EVAL_REC_2816_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2817(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2817_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2817_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2817_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2817_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2817_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2817_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2817_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2817_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2817_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2817_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2818
#define AGONY_PP_PRIVATE_EVAL_REC_2817_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2818(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2818_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2818_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2818_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2818_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2818_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2818_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2818_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2818_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2818_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2818_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2819
#define AGONY_PP_PRIVATE_EVAL_REC_2818_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2819(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2819_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2819_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2819_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2819_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2819_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2819_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2819_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2819_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2819_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2819_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2820
#define AGONY_PP_PRIVATE_EVAL_REC_2819_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2820(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2820_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2820_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2820_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2820_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2820_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2820_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2820_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2820_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2820_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2820_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2821
#define AGONY_PP_PRIVATE_EVAL_REC_2820_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2821(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2821_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2821_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2821_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2821_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2821_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2821_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2821_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2821_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2821_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2821_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2822
#define AGONY_PP_PRIVATE_EVAL_REC_2821_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2822(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2822_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2822_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2822_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2822_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2822_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2822_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2822_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2822_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2822_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2822_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2823
#define AGONY_PP_PRIVATE_EVAL_REC_2822_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2823(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2823_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2823_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2823_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2823_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2823_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2823_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2823_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2823_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2823_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2823_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2824
#define AGONY_PP_PRIVATE_EVAL_REC_2823_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2824(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2824_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2824_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2824_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2824_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2824_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2824_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2824_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2824_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2824_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2824_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2825
#define AGONY_PP_PRIVATE_EVAL_REC_2824_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2825(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2825_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2825_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2825_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2825_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2825_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2825_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2825_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2825_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2825_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2825_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2826
#define AGONY_PP_PRIVATE_EVAL_REC_2825_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2826(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2826_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2826_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2826_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2826_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2826_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2826_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2826_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2826_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2826_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2826_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2827
#define AGONY_PP_PRIVATE_EVAL_REC_2826_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2827(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2827_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2827_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2827_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2827_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2827_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2827_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2827_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2827_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2827_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2827_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2828
#define AGONY_PP_PRIVATE_EVAL_REC_2827_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2828(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2828_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2828_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2828_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2828_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2828_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2828_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2828_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2828_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2828_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2828_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2829
#define AGONY_PP_PRIVATE_EVAL_REC_2828_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2829(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2829_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2829_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2829_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2829_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2829_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2829_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2829_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2829_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2829_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2829_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2830
#define AGONY_PP_PRIVATE_EVAL_REC_2829_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2830(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2830_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2830_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2830_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2830_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2830_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2830_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2830_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2830_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2830_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2830_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2831
#define AGONY_PP_PRIVATE_EVAL_REC_2830_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2831(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2831_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2831_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2831_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2831_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2831_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2831_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2831_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2831_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2831_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2831_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2832
#define AGONY_PP_PRIVATE_EVAL_REC_2831_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2832(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2832_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2832_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2832_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2832_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2832_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2832_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2832_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2832_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2832_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2832_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2833
#define AGONY_PP_PRIVATE_EVAL_REC_2832_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2833(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2833_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2833_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2833_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2833_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2833_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2833_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2833_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2833_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2833_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2833_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2834
#define AGONY_PP_PRIVATE_EVAL_REC_2833_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2834(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2834_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2834_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2834_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2834_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2834_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2834_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2834_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2834_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2834_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2834_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2835
#define AGONY_PP_PRIVATE_EVAL_REC_2834_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2835(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2835_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2835_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2835_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2835_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2835_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2835_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2835_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2835_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2835_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2835_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2836
#define AGONY_PP_PRIVATE_EVAL_REC_2835_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2836(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2836_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2836_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2836_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2836_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2836_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2836_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2836_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2836_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2836_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2836_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2837
#define AGONY_PP_PRIVATE_EVAL_REC_2836_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2837(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2837_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2837_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2837_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2837_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2837_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2837_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2837_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2837_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2837_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2837_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2838
#define AGONY_PP_PRIVATE_EVAL_REC_2837_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2838(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2838_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2838_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2838_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2838_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2838_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2838_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2838_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2838_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2838_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2838_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2839
#define AGONY_PP_PRIVATE_EVAL_REC_2838_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2839(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2839_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2839_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2839_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2839_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2839_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2839_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2839_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2839_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2839_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2839_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2840
#define AGONY_PP_PRIVATE_EVAL_REC_2839_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2840(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2840_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2840_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2840_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2840_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2840_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2840_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2840_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2840_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2840_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2840_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2841
#define AGONY_PP_PRIVATE_EVAL_REC_2840_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2841(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2841_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2841_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2841_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2841_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2841_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2841_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2841_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2841_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2841_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2841_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2842
#define AGONY_PP_PRIVATE_EVAL_REC_2841_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2842(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2842_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2842_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2842_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2842_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2842_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2842_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2842_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2842_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2842_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2842_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2843
#define AGONY_PP_PRIVATE_EVAL_REC_2842_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2843(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2843_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2843_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2843_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2843_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2843_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2843_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2843_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2843_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2843_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2843_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2844
#define AGONY_PP_PRIVATE_EVAL_REC_2843_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2844(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2844_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2844_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2844_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2844_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2844_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2844_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2844_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2844_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2844_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2844_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2845
#define AGONY_PP_PRIVATE_EVAL_REC_2844_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2845(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2845_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2845_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2845_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2845_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2845_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2845_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2845_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2845_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2845_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2845_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2846
#define AGONY_PP_PRIVATE_EVAL_REC_2845_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2846(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2846_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2846_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2846_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2846_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2846_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2846_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2846_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2846_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2846_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2846_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2847
#define AGONY_PP_PRIVATE_EVAL_REC_2846_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2847(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2847_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2847_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2847_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2847_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2847_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2847_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2847_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2847_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2847_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2847_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2848
#define AGONY_PP_PRIVATE_EVAL_REC_2847_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2848(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2848_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2848_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2848_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2848_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2848_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2848_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2848_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2848_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2848_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2848_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2849
#define AGONY_PP_PRIVATE_EVAL_REC_2848_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2849(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2849_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2849_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2849_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2849_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2849_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2849_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2849_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2849_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2849_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2849_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2850
#define AGONY_PP_PRIVATE_EVAL_REC_2849_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2850(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2850_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2850_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2850_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2850_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2850_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2850_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2850_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2850_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2850_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2850_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2851
#define AGONY_PP_PRIVATE_EVAL_REC_2850_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2851(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2851_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2851_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2851_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2851_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2851_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2851_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2851_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2851_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2851_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2851_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2852
#define AGONY_PP_PRIVATE_EVAL_REC_2851_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2852(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2852_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2852_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2852_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2852_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2852_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2852_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2852_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2852_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2852_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2852_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2853
#define AGONY_PP_PRIVATE_EVAL_REC_2852_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2853(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2853_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2853_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2853_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2853_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2853_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2853_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2853_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2853_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2853_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2853_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2854
#define AGONY_PP_PRIVATE_EVAL_REC_2853_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2854(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2854_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2854_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2854_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2854_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2854_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2854_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2854_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2854_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2854_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2854_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2855
#define AGONY_PP_PRIVATE_EVAL_REC_2854_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2855(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2855_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2855_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2855_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2855_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2855_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2855_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2855_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2855_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2855_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2855_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2856
#define AGONY_PP_PRIVATE_EVAL_REC_2855_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2856(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2856_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2856_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2856_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2856_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2856_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2856_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2856_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2856_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2856_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2856_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2857
#define AGONY_PP_PRIVATE_EVAL_REC_2856_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2857(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2857_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2857_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2857_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2857_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2857_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2857_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2857_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2857_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2857_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2857_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2858
#define AGONY_PP_PRIVATE_EVAL_REC_2857_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2858(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2858_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2858_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2858_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2858_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2858_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2858_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2858_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2858_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2858_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2858_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2859
#define AGONY_PP_PRIVATE_EVAL_REC_2858_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2859(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2859_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2859_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2859_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2859_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2859_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2859_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2859_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2859_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2859_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2859_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2860
#define AGONY_PP_PRIVATE_EVAL_REC_2859_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2860(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2860_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2860_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2860_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2860_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2860_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2860_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2860_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2860_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2860_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2860_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2861
#define AGONY_PP_PRIVATE_EVAL_REC_2860_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2861(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2861_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2861_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2861_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2861_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2861_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2861_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2861_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2861_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2861_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2861_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2862
#define AGONY_PP_PRIVATE_EVAL_REC_2861_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2862(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2862_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2862_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2862_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2862_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2862_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2862_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2862_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2862_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2862_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2862_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2863
#define AGONY_PP_PRIVATE_EVAL_REC_2862_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2863(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2863_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2863_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2863_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2863_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2863_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2863_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2863_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2863_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2863_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2863_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2864
#define AGONY_PP_PRIVATE_EVAL_REC_2863_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2864(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2864_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2864_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2864_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2864_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2864_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2864_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2864_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2864_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2864_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2864_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2865
#define AGONY_PP_PRIVATE_EVAL_REC_2864_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2865(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2865_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2865_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2865_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2865_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2865_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2865_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2865_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2865_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2865_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2865_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2866
#define AGONY_PP_PRIVATE_EVAL_REC_2865_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2866(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2866_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2866_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2866_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2866_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2866_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2866_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2866_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2866_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2866_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2866_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2867
#define AGONY_PP_PRIVATE_EVAL_REC_2866_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2867(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2867_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2867_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2867_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2867_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2867_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2867_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2867_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2867_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2867_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2867_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2868
#define AGONY_PP_PRIVATE_EVAL_REC_2867_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2868(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2868_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2868_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2868_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2868_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2868_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2868_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2868_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2868_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2868_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2868_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2869
#define AGONY_PP_PRIVATE_EVAL_REC_2868_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2869(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2869_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2869_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2869_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2869_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2869_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2869_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2869_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2869_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2869_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2869_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2870
#define AGONY_PP_PRIVATE_EVAL_REC_2869_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2870(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2870_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2870_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2870_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2870_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2870_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2870_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2870_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2870_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2870_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2870_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2871
#define AGONY_PP_PRIVATE_EVAL_REC_2870_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2871(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2871_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2871_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2871_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2871_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2871_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2871_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2871_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2871_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2871_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2871_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2872
#define AGONY_PP_PRIVATE_EVAL_REC_2871_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2872(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2872_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2872_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2872_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2872_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2872_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2872_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2872_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2872_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2872_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2872_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2873
#define AGONY_PP_PRIVATE_EVAL_REC_2872_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2873(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2873_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2873_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2873_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2873_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2873_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2873_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2873_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2873_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2873_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2873_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2874
#define AGONY_PP_PRIVATE_EVAL_REC_2873_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2874(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2874_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2874_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2874_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2874_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2874_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2874_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2874_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2874_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2874_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2874_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2875
#define AGONY_PP_PRIVATE_EVAL_REC_2874_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2875(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2875_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2875_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2875_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2875_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2875_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2875_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2875_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2875_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2875_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2875_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2876
#define AGONY_PP_PRIVATE_EVAL_REC_2875_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2876(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2876_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2876_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2876_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2876_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2876_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2876_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2876_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2876_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2876_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2876_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2877
#define AGONY_PP_PRIVATE_EVAL_REC_2876_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2877(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2877_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2877_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2877_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2877_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2877_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2877_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2877_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2877_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2877_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2877_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2878
#define AGONY_PP_PRIVATE_EVAL_REC_2877_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2878(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2878_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2878_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2878_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2878_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2878_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2878_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2878_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2878_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2878_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2878_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2879
#define AGONY_PP_PRIVATE_EVAL_REC_2878_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2879(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2879_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2879_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2879_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2879_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2879_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2879_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2879_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2879_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2879_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2879_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2880
#define AGONY_PP_PRIVATE_EVAL_REC_2879_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2880(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2880_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2880_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2880_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2880_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2880_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2880_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2880_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2880_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2880_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2880_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2881
#define AGONY_PP_PRIVATE_EVAL_REC_2880_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2881(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2881_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2881_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2881_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2881_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2881_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2881_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2881_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2881_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2881_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2881_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2882
#define AGONY_PP_PRIVATE_EVAL_REC_2881_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2882(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2882_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2882_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2882_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2882_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2882_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2882_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2882_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2882_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2882_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2882_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2883
#define AGONY_PP_PRIVATE_EVAL_REC_2882_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2883(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2883_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2883_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2883_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2883_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2883_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2883_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2883_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2883_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2883_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2883_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2884
#define AGONY_PP_PRIVATE_EVAL_REC_2883_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2884(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2884_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2884_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2884_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2884_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2884_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2884_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2884_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2884_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2884_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2884_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2885
#define AGONY_PP_PRIVATE_EVAL_REC_2884_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2885(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2885_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2885_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2885_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2885_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2885_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2885_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2885_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2885_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2885_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2885_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2886
#define AGONY_PP_PRIVATE_EVAL_REC_2885_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2886(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2886_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2886_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2886_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2886_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2886_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2886_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2886_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2886_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2886_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2886_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2887
#define AGONY_PP_PRIVATE_EVAL_REC_2886_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2887(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2887_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2887_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2887_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2887_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2887_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2887_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2887_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2887_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2887_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2887_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2888
#define AGONY_PP_PRIVATE_EVAL_REC_2887_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2888(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2888_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2888_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2888_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2888_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2888_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2888_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2888_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2888_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2888_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2888_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2889
#define AGONY_PP_PRIVATE_EVAL_REC_2888_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2889(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2889_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2889_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2889_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2889_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2889_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2889_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2889_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2889_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2889_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2889_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2890
#define AGONY_PP_PRIVATE_EVAL_REC_2889_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2890(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2890_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2890_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2890_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2890_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2890_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2890_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2890_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2890_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2890_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2890_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2891
#define AGONY_PP_PRIVATE_EVAL_REC_2890_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2891(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2891_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2891_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2891_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2891_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2891_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2891_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2891_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2891_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2891_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2891_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2892
#define AGONY_PP_PRIVATE_EVAL_REC_2891_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2892(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2892_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2892_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2892_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2892_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2892_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2892_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2892_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2892_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2892_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2892_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2893
#define AGONY_PP_PRIVATE_EVAL_REC_2892_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2893(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2893_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2893_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2893_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2893_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2893_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2893_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2893_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2893_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2893_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2893_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2894
#define AGONY_PP_PRIVATE_EVAL_REC_2893_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2894(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2894_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2894_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2894_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2894_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2894_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2894_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2894_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2894_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2894_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2894_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2895
#define AGONY_PP_PRIVATE_EVAL_REC_2894_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2895(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2895_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2895_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2895_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2895_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2895_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2895_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2895_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2895_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2895_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2895_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2896
#define AGONY_PP_PRIVATE_EVAL_REC_2895_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2896(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2896_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2896_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2896_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2896_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2896_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2896_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2896_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2896_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2896_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2896_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2897
#define AGONY_PP_PRIVATE_EVAL_REC_2896_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2897(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2897_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2897_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2897_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2897_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2897_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2897_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2897_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2897_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2897_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2897_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2898
#define AGONY_PP_PRIVATE_EVAL_REC_2897_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2898(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2898_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2898_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2898_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2898_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2898_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2898_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2898_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2898_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2898_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2898_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2899
#define AGONY_PP_PRIVATE_EVAL_REC_2898_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2899(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2899_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2899_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2899_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2899_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2899_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2899_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2899_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2899_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2899_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2899_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2900
#define AGONY_PP_PRIVATE_EVAL_REC_2899_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2900(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2900_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2900_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2900_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2900_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2900_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2900_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2900_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2900_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2900_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2900_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2901
#define AGONY_PP_PRIVATE_EVAL_REC_2900_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2901(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2901_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2901_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2901_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2901_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2901_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2901_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2901_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2901_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2901_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2901_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2902
#define AGONY_PP_PRIVATE_EVAL_REC_2901_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2902(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2902_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2902_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2902_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2902_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2902_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2902_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2902_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2902_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2902_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2902_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2903
#define AGONY_PP_PRIVATE_EVAL_REC_2902_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2903(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2903_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2903_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2903_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2903_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2903_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2903_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2903_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2903_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2903_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2903_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2904
#define AGONY_PP_PRIVATE_EVAL_REC_2903_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2904(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2904_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2904_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2904_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2904_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2904_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2904_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2904_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2904_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2904_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2904_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2905
#define AGONY_PP_PRIVATE_EVAL_REC_2904_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2905(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2905_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2905_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2905_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2905_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2905_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2905_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2905_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2905_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2905_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2905_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2906
#define AGONY_PP_PRIVATE_EVAL_REC_2905_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2906(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2906_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2906_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2906_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2906_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2906_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2906_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2906_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2906_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2906_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2906_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2907
#define AGONY_PP_PRIVATE_EVAL_REC_2906_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2907(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2907_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2907_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2907_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2907_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2907_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2907_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2907_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2907_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2907_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2907_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2908
#define AGONY_PP_PRIVATE_EVAL_REC_2907_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2908(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2908_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2908_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2908_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2908_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2908_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2908_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2908_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2908_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2908_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2908_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2909
#define AGONY_PP_PRIVATE_EVAL_REC_2908_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2909(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2909_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2909_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2909_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2909_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2909_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2909_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2909_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2909_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2909_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2909_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2910
#define AGONY_PP_PRIVATE_EVAL_REC_2909_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2910(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2910_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2910_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2910_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2910_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2910_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2910_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2910_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2910_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2910_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2910_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2911
#define AGONY_PP_PRIVATE_EVAL_REC_2910_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2911(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2911_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2911_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2911_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2911_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2911_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2911_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2911_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2911_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2911_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2911_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2912
#define AGONY_PP_PRIVATE_EVAL_REC_2911_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2912(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2912_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2912_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2912_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2912_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2912_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2912_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2912_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2912_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2912_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2912_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2913
#define AGONY_PP_PRIVATE_EVAL_REC_2912_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2913(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2913_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2913_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2913_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2913_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2913_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2913_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2913_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2913_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2913_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2913_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2914
#define AGONY_PP_PRIVATE_EVAL_REC_2913_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2914(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2914_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2914_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2914_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2914_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2914_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2914_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2914_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2914_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2914_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2914_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2915
#define AGONY_PP_PRIVATE_EVAL_REC_2914_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2915(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2915_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2915_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2915_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2915_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2915_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2915_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2915_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2915_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2915_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2915_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2916
#define AGONY_PP_PRIVATE_EVAL_REC_2915_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2916(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2916_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2916_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2916_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2916_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2916_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2916_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2916_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2916_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2916_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2916_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2917
#define AGONY_PP_PRIVATE_EVAL_REC_2916_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2917(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2917_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2917_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2917_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2917_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2917_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2917_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2917_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2917_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2917_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2917_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2918
#define AGONY_PP_PRIVATE_EVAL_REC_2917_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2918(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2918_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2918_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2918_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2918_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2918_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2918_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2918_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2918_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2918_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2918_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2919
#define AGONY_PP_PRIVATE_EVAL_REC_2918_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2919(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2919_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2919_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2919_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2919_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2919_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2919_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2919_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2919_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2919_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2919_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2920
#define AGONY_PP_PRIVATE_EVAL_REC_2919_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2920(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2920_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2920_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2920_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2920_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2920_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2920_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2920_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2920_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2920_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2920_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2921
#define AGONY_PP_PRIVATE_EVAL_REC_2920_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2921(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2921_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2921_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2921_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2921_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2921_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2921_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2921_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2921_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2921_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2921_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2922
#define AGONY_PP_PRIVATE_EVAL_REC_2921_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2922(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2922_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2922_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2922_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2922_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2922_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2922_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2922_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2922_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2922_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2922_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2923
#define AGONY_PP_PRIVATE_EVAL_REC_2922_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2923(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2923_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2923_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2923_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2923_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2923_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2923_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2923_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2923_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2923_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2923_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2924
#define AGONY_PP_PRIVATE_EVAL_REC_2923_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2924(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2924_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2924_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2924_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2924_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2924_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2924_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2924_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2924_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2924_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2924_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2925
#define AGONY_PP_PRIVATE_EVAL_REC_2924_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2925(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2925_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2925_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2925_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2925_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2925_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2925_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2925_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2925_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2925_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2925_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2926
#define AGONY_PP_PRIVATE_EVAL_REC_2925_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2926(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2926_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2926_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2926_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2926_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2926_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2926_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2926_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2926_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2926_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2926_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2927
#define AGONY_PP_PRIVATE_EVAL_REC_2926_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2927(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2927_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2927_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2927_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2927_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2927_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2927_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2927_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2927_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2927_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2927_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2928
#define AGONY_PP_PRIVATE_EVAL_REC_2927_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2928(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2928_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2928_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2928_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2928_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2928_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2928_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2928_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2928_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2928_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2928_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2929
#define AGONY_PP_PRIVATE_EVAL_REC_2928_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2929(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2929_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2929_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2929_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2929_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2929_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2929_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2929_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2929_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2929_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2929_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2930
#define AGONY_PP_PRIVATE_EVAL_REC_2929_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2930(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2930_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2930_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2930_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2930_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2930_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2930_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2930_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2930_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2930_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2930_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2931
#define AGONY_PP_PRIVATE_EVAL_REC_2930_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2931(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2931_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2931_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2931_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2931_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2931_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2931_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2931_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2931_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2931_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2931_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2932
#define AGONY_PP_PRIVATE_EVAL_REC_2931_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2932(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2932_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2932_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2932_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2932_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2932_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2932_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2932_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2932_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2932_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2932_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2933
#define AGONY_PP_PRIVATE_EVAL_REC_2932_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2933(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2933_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2933_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2933_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2933_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2933_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2933_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2933_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2933_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2933_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2933_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2934
#define AGONY_PP_PRIVATE_EVAL_REC_2933_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2934(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2934_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2934_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2934_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2934_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2934_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2934_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2934_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2934_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2934_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2934_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2935
#define AGONY_PP_PRIVATE_EVAL_REC_2934_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2935(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2935_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2935_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2935_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2935_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2935_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2935_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2935_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2935_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2935_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2935_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2936
#define AGONY_PP_PRIVATE_EVAL_REC_2935_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2936(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2936_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2936_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2936_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2936_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2936_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2936_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2936_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2936_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2936_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2936_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2937
#define AGONY_PP_PRIVATE_EVAL_REC_2936_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2937(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2937_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2937_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2937_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2937_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2937_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2937_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2937_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2937_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2937_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2937_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2938
#define AGONY_PP_PRIVATE_EVAL_REC_2937_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2938(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2938_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2938_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2938_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2938_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2938_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2938_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2938_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2938_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2938_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2938_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2939
#define AGONY_PP_PRIVATE_EVAL_REC_2938_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2939(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2939_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2939_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2939_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2939_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2939_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2939_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2939_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2939_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2939_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2939_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2940
#define AGONY_PP_PRIVATE_EVAL_REC_2939_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2940(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2940_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2940_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2940_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2940_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2940_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2940_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2940_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2940_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2940_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2940_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2941
#define AGONY_PP_PRIVATE_EVAL_REC_2940_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2941(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2941_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2941_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2941_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2941_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2941_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2941_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2941_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2941_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2941_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2941_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2942
#define AGONY_PP_PRIVATE_EVAL_REC_2941_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2942(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2942_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2942_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2942_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2942_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2942_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2942_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2942_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2942_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2942_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2942_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2943
#define AGONY_PP_PRIVATE_EVAL_REC_2942_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2943(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2943_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2943_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2943_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2943_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2943_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2943_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2943_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2943_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2943_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2943_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2944
#define AGONY_PP_PRIVATE_EVAL_REC_2943_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2944(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2944_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2944_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2944_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2944_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2944_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2944_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2944_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2944_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2944_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2944_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2945
#define AGONY_PP_PRIVATE_EVAL_REC_2944_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2945(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2945_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2945_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2945_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2945_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2945_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2945_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2945_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2945_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2945_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2945_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2946
#define AGONY_PP_PRIVATE_EVAL_REC_2945_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2946(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2946_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2946_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2946_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2946_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2946_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2946_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2946_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2946_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2946_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2946_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2947
#define AGONY_PP_PRIVATE_EVAL_REC_2946_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2947(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2947_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2947_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2947_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2947_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2947_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2947_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2947_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2947_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2947_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2947_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2948
#define AGONY_PP_PRIVATE_EVAL_REC_2947_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2948(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2948_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2948_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2948_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2948_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2948_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2948_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2948_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2948_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2948_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2948_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2949
#define AGONY_PP_PRIVATE_EVAL_REC_2948_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2949(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2949_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2949_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2949_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2949_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2949_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2949_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2949_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2949_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2949_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2949_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2950
#define AGONY_PP_PRIVATE_EVAL_REC_2949_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2950(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2950_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2950_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2950_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2950_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2950_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2950_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2950_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2950_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2950_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2950_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2951
#define AGONY_PP_PRIVATE_EVAL_REC_2950_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2951(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2951_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2951_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2951_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2951_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2951_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2951_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2951_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2951_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2951_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2951_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2952
#define AGONY_PP_PRIVATE_EVAL_REC_2951_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2952(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2952_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2952_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2952_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2952_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2952_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2952_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2952_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2952_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2952_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2952_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2953
#define AGONY_PP_PRIVATE_EVAL_REC_2952_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2953(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2953_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2953_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2953_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2953_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2953_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2953_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2953_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2953_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2953_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2953_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2954
#define AGONY_PP_PRIVATE_EVAL_REC_2953_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2954(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2954_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2954_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2954_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2954_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2954_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2954_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2954_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2954_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2954_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2954_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2955
#define AGONY_PP_PRIVATE_EVAL_REC_2954_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2955(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2955_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2955_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2955_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2955_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2955_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2955_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2955_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2955_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2955_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2955_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2956
#define AGONY_PP_PRIVATE_EVAL_REC_2955_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2956(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2956_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2956_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2956_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2956_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2956_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2956_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2956_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2956_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2956_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2956_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2957
#define AGONY_PP_PRIVATE_EVAL_REC_2956_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2957(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2957_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2957_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2957_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2957_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2957_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2957_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2957_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2957_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2957_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2957_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2958
#define AGONY_PP_PRIVATE_EVAL_REC_2957_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2958(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2958_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2958_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2958_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2958_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2958_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2958_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2958_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2958_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2958_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2958_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2959
#define AGONY_PP_PRIVATE_EVAL_REC_2958_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2959(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2959_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2959_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2959_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2959_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2959_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2959_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2959_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2959_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2959_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2959_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2960
#define AGONY_PP_PRIVATE_EVAL_REC_2959_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2960(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2960_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2960_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2960_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2960_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2960_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2960_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2960_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2960_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2960_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2960_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2961
#define AGONY_PP_PRIVATE_EVAL_REC_2960_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2961(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2961_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2961_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2961_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2961_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2961_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2961_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2961_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2961_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2961_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2961_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2962
#define AGONY_PP_PRIVATE_EVAL_REC_2961_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2962(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2962_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2962_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2962_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2962_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2962_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2962_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2962_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2962_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2962_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2962_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2963
#define AGONY_PP_PRIVATE_EVAL_REC_2962_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2963(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2963_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2963_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2963_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2963_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2963_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2963_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2963_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2963_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2963_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2963_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2964
#define AGONY_PP_PRIVATE_EVAL_REC_2963_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2964(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2964_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2964_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2964_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2964_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2964_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2964_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2964_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2964_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2964_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2964_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2965
#define AGONY_PP_PRIVATE_EVAL_REC_2964_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2965(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2965_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2965_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2965_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2965_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2965_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2965_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2965_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2965_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2965_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2965_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2966
#define AGONY_PP_PRIVATE_EVAL_REC_2965_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2966(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2966_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2966_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2966_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2966_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2966_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2966_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2966_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2966_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2966_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2966_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2967
#define AGONY_PP_PRIVATE_EVAL_REC_2966_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2967(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2967_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2967_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2967_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2967_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2967_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2967_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2967_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2967_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2967_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2967_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2968
#define AGONY_PP_PRIVATE_EVAL_REC_2967_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2968(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2968_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2968_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2968_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2968_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2968_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2968_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2968_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2968_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2968_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2968_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2969
#define AGONY_PP_PRIVATE_EVAL_REC_2968_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2969(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2969_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2969_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2969_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2969_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2969_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2969_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2969_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2969_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2969_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2969_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2970
#define AGONY_PP_PRIVATE_EVAL_REC_2969_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2970(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2970_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2970_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2970_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2970_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2970_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2970_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2970_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2970_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2970_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2970_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2971
#define AGONY_PP_PRIVATE_EVAL_REC_2970_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2971(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2971_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2971_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2971_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2971_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2971_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2971_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2971_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2971_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2971_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2971_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2972
#define AGONY_PP_PRIVATE_EVAL_REC_2971_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2972(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2972_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2972_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2972_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2972_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2972_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2972_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2972_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2972_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2972_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2972_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2973
#define AGONY_PP_PRIVATE_EVAL_REC_2972_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2973(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2973_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2973_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2973_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2973_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2973_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2973_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2973_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2973_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2973_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2973_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2974
#define AGONY_PP_PRIVATE_EVAL_REC_2973_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2974(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2974_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2974_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2974_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2974_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2974_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2974_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2974_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2974_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2974_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2974_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2975
#define AGONY_PP_PRIVATE_EVAL_REC_2974_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2975(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2975_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2975_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2975_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2975_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2975_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2975_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2975_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2975_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2975_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2975_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2976
#define AGONY_PP_PRIVATE_EVAL_REC_2975_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2976(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2976_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2976_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2976_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2976_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2976_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2976_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2976_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2976_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2976_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2976_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2977
#define AGONY_PP_PRIVATE_EVAL_REC_2976_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2977(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2977_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2977_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2977_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2977_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2977_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2977_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2977_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2977_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2977_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2977_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2978
#define AGONY_PP_PRIVATE_EVAL_REC_2977_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2978(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2978_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2978_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2978_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2978_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2978_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2978_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2978_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2978_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2978_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2978_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2979
#define AGONY_PP_PRIVATE_EVAL_REC_2978_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2979(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2979_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2979_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2979_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2979_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2979_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2979_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2979_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2979_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2979_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2979_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2980
#define AGONY_PP_PRIVATE_EVAL_REC_2979_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2980(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2980_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2980_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2980_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2980_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2980_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2980_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2980_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2980_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2980_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2980_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2981
#define AGONY_PP_PRIVATE_EVAL_REC_2980_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2981(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2981_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2981_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2981_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2981_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2981_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2981_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2981_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2981_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2981_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2981_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2982
#define AGONY_PP_PRIVATE_EVAL_REC_2981_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2982(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2982_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2982_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2982_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2982_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2982_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2982_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2982_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2982_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2982_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2982_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2983
#define AGONY_PP_PRIVATE_EVAL_REC_2982_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2983(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2983_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2983_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2983_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2983_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2983_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2983_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2983_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2983_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2983_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2983_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2984
#define AGONY_PP_PRIVATE_EVAL_REC_2983_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2984(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2984_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2984_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2984_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2984_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2984_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2984_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2984_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2984_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2984_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2984_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2985
#define AGONY_PP_PRIVATE_EVAL_REC_2984_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2985(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2985_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2985_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2985_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2985_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2985_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2985_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2985_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2985_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2985_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2985_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2986
#define AGONY_PP_PRIVATE_EVAL_REC_2985_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2986(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2986_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2986_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2986_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2986_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2986_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2986_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2986_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2986_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2986_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2986_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2987
#define AGONY_PP_PRIVATE_EVAL_REC_2986_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2987(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2987_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2987_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2987_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2987_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2987_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2987_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2987_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2987_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2987_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2987_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2988
#define AGONY_PP_PRIVATE_EVAL_REC_2987_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2988(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2988_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2988_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2988_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2988_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2988_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2988_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2988_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2988_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2988_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2988_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2989
#define AGONY_PP_PRIVATE_EVAL_REC_2988_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2989(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2989_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2989_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2989_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2989_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2989_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2989_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2989_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2989_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2989_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2989_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2990
#define AGONY_PP_PRIVATE_EVAL_REC_2989_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2990(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2990_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2990_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2990_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2990_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2990_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2990_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2990_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2990_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2990_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2990_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2991
#define AGONY_PP_PRIVATE_EVAL_REC_2990_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2991(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2991_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2991_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2991_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2991_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2991_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2991_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2991_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2991_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2991_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2991_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2992
#define AGONY_PP_PRIVATE_EVAL_REC_2991_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2992(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2992_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2992_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2992_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2992_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2992_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2992_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2992_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2992_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2992_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2992_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2993
#define AGONY_PP_PRIVATE_EVAL_REC_2992_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2993(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2993_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2993_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2993_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2993_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2993_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2993_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2993_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2993_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2993_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2993_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2994
#define AGONY_PP_PRIVATE_EVAL_REC_2993_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2994(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2994_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2994_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2994_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2994_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2994_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2994_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2994_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2994_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2994_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2994_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2995
#define AGONY_PP_PRIVATE_EVAL_REC_2994_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2995(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2995_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2995_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2995_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2995_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2995_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2995_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2995_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2995_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2995_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2995_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2996
#define AGONY_PP_PRIVATE_EVAL_REC_2995_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2996(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2996_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2996_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2996_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2996_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2996_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2996_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2996_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2996_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2996_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2996_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2997
#define AGONY_PP_PRIVATE_EVAL_REC_2996_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2997(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2997_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2997_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2997_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2997_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2997_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2997_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2997_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2997_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2997_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2997_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2998
#define AGONY_PP_PRIVATE_EVAL_REC_2997_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2998(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2998_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2998_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2998_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2998_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2998_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2998_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2998_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2998_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2998_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2998_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2999
#define AGONY_PP_PRIVATE_EVAL_REC_2998_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2999(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2999_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2999_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2999_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2999_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2999_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2999_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2999_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2999_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2999_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2999_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3000
#define AGONY_PP_PRIVATE_EVAL_REC_2999_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3000(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3000_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3000_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3000_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3000_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3000_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3000_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3000_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3000_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3000_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3000_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3001
#define AGONY_PP_PRIVATE_EVAL_REC_3000_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3001(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3001_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3001_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3001_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3001_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3001_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3001_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3001_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3001_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3001_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3001_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3002
#define AGONY_PP_PRIVATE_EVAL_REC_3001_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3002(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3002_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3002_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3002_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3002_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3002_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3002_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3002_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3002_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3002_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3002_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3003
#define AGONY_PP_PRIVATE_EVAL_REC_3002_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3003(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3003_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3003_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3003_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3003_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3003_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3003_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3003_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3003_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3003_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3003_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3004
#define AGONY_PP_PRIVATE_EVAL_REC_3003_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3004(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3004_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3004_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3004_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3004_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3004_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3004_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3004_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3004_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3004_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3004_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3005
#define AGONY_PP_PRIVATE_EVAL_REC_3004_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3005(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3005_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3005_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3005_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3005_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3005_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3005_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3005_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3005_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3005_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3005_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3006
#define AGONY_PP_PRIVATE_EVAL_REC_3005_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3006(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3006_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3006_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3006_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3006_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3006_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3006_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3006_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3006_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3006_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3006_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3007
#define AGONY_PP_PRIVATE_EVAL_REC_3006_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3007(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3007_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3007_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3007_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3007_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3007_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3007_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3007_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3007_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3007_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3007_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3008
#define AGONY_PP_PRIVATE_EVAL_REC_3007_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3008(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3008_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3008_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3008_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3008_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3008_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3008_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3008_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3008_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3008_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3008_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3009
#define AGONY_PP_PRIVATE_EVAL_REC_3008_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3009(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3009_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3009_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3009_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3009_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3009_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3009_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3009_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3009_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3009_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3009_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3010
#define AGONY_PP_PRIVATE_EVAL_REC_3009_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3010(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3010_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3010_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3010_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3010_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3010_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3010_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3010_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3010_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3010_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3010_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3011
#define AGONY_PP_PRIVATE_EVAL_REC_3010_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3011(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3011_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3011_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3011_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3011_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3011_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3011_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3011_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3011_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3011_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3011_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3012
#define AGONY_PP_PRIVATE_EVAL_REC_3011_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3012(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3012_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3012_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3012_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3012_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3012_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3012_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3012_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3012_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3012_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3012_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3013
#define AGONY_PP_PRIVATE_EVAL_REC_3012_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3013(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3013_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3013_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3013_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3013_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3013_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3013_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3013_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3013_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3013_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3013_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3014
#define AGONY_PP_PRIVATE_EVAL_REC_3013_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3014(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3014_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3014_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3014_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3014_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3014_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3014_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3014_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3014_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3014_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3014_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3015
#define AGONY_PP_PRIVATE_EVAL_REC_3014_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3015(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3015_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3015_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3015_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3015_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3015_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3015_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3015_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3015_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3015_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3015_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3016
#define AGONY_PP_PRIVATE_EVAL_REC_3015_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3016(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3016_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3016_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3016_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3016_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3016_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3016_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3016_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3016_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3016_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3016_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3017
#define AGONY_PP_PRIVATE_EVAL_REC_3016_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3017(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3017_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3017_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3017_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3017_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3017_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3017_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3017_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3017_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3017_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3017_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3018
#define AGONY_PP_PRIVATE_EVAL_REC_3017_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3018(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3018_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3018_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3018_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3018_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3018_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3018_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3018_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3018_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3018_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3018_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3019
#define AGONY_PP_PRIVATE_EVAL_REC_3018_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3019(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3019_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3019_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3019_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3019_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3019_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3019_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3019_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3019_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3019_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3019_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3020
#define AGONY_PP_PRIVATE_EVAL_REC_3019_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3020(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3020_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3020_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3020_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3020_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3020_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3020_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3020_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3020_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3020_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3020_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3021
#define AGONY_PP_PRIVATE_EVAL_REC_3020_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3021(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3021_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3021_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3021_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3021_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3021_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3021_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3021_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3021_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3021_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3021_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3022
#define AGONY_PP_PRIVATE_EVAL_REC_3021_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3022(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3022_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3022_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3022_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3022_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3022_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3022_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3022_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3022_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3022_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3022_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3023
#define AGONY_PP_PRIVATE_EVAL_REC_3022_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3023(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3023_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3023_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3023_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3023_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3023_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3023_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3023_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3023_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3023_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3023_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3024
#define AGONY_PP_PRIVATE_EVAL_REC_3023_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3024(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3024_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3024_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3024_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3024_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3024_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3024_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3024_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3024_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3024_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3024_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3025
#define AGONY_PP_PRIVATE_EVAL_REC_3024_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3025(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3025_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3025_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3025_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3025_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3025_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3025_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3025_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3025_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3025_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3025_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3026
#define AGONY_PP_PRIVATE_EVAL_REC_3025_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3026(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3026_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3026_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3026_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3026_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3026_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3026_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3026_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3026_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3026_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3026_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3027
#define AGONY_PP_PRIVATE_EVAL_REC_3026_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3027(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3027_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3027_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3027_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3027_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3027_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3027_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3027_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3027_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3027_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3027_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3028
#define AGONY_PP_PRIVATE_EVAL_REC_3027_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3028(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3028_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3028_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3028_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3028_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3028_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3028_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3028_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3028_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3028_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3028_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3029
#define AGONY_PP_PRIVATE_EVAL_REC_3028_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3029(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3029_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3029_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3029_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3029_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3029_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3029_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3029_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3029_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3029_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3029_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3030
#define AGONY_PP_PRIVATE_EVAL_REC_3029_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3030(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3030_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3030_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3030_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3030_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3030_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3030_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3030_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3030_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3030_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3030_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3031
#define AGONY_PP_PRIVATE_EVAL_REC_3030_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3031(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3031_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3031_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3031_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3031_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3031_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3031_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3031_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3031_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3031_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3031_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3032
#define AGONY_PP_PRIVATE_EVAL_REC_3031_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3032(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3032_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3032_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3032_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3032_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3032_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3032_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3032_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3032_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3032_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3032_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3033
#define AGONY_PP_PRIVATE_EVAL_REC_3032_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3033(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3033_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3033_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3033_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3033_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3033_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3033_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3033_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3033_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3033_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3033_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3034
#define AGONY_PP_PRIVATE_EVAL_REC_3033_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3034(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3034_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3034_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3034_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3034_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3034_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3034_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3034_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3034_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3034_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3034_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3035
#define AGONY_PP_PRIVATE_EVAL_REC_3034_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3035(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3035_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3035_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3035_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3035_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3035_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3035_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3035_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3035_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3035_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3035_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3036
#define AGONY_PP_PRIVATE_EVAL_REC_3035_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3036(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3036_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3036_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3036_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3036_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3036_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3036_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3036_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3036_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3036_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3036_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3037
#define AGONY_PP_PRIVATE_EVAL_REC_3036_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3037(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3037_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3037_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3037_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3037_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3037_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3037_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3037_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3037_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3037_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3037_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3038
#define AGONY_PP_PRIVATE_EVAL_REC_3037_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3038(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3038_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3038_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3038_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3038_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3038_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3038_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3038_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3038_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3038_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3038_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3039
#define AGONY_PP_PRIVATE_EVAL_REC_3038_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3039(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3039_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3039_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3039_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3039_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3039_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3039_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3039_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3039_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3039_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3039_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3040
#define AGONY_PP_PRIVATE_EVAL_REC_3039_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3040(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3040_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3040_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3040_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3040_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3040_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3040_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3040_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3040_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3040_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3040_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3041
#define AGONY_PP_PRIVATE_EVAL_REC_3040_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3041(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3041_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3041_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3041_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3041_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3041_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3041_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3041_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3041_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3041_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3041_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3042
#define AGONY_PP_PRIVATE_EVAL_REC_3041_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3042(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3042_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3042_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3042_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3042_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3042_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3042_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3042_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3042_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3042_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3042_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3043
#define AGONY_PP_PRIVATE_EVAL_REC_3042_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3043(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3043_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3043_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3043_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3043_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3043_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3043_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3043_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3043_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3043_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3043_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3044
#define AGONY_PP_PRIVATE_EVAL_REC_3043_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3044(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3044_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3044_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3044_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3044_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3044_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3044_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3044_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3044_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3044_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3044_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3045
#define AGONY_PP_PRIVATE_EVAL_REC_3044_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3045(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3045_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3045_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3045_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3045_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3045_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3045_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3045_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3045_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3045_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3045_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3046
#define AGONY_PP_PRIVATE_EVAL_REC_3045_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3046(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3046_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3046_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3046_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3046_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3046_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3046_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3046_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3046_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3046_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3046_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3047
#define AGONY_PP_PRIVATE_EVAL_REC_3046_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3047(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3047_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3047_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3047_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3047_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3047_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3047_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3047_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3047_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3047_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3047_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3048
#define AGONY_PP_PRIVATE_EVAL_REC_3047_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3048(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3048_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3048_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3048_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3048_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3048_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3048_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3048_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3048_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3048_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3048_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3049
#define AGONY_PP_PRIVATE_EVAL_REC_3048_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3049(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3049_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3049_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3049_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3049_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3049_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3049_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3049_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3049_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3049_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3049_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3050
#define AGONY_PP_PRIVATE_EVAL_REC_3049_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3050(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3050_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3050_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3050_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3050_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3050_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3050_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3050_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3050_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3050_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3050_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3051
#define AGONY_PP_PRIVATE_EVAL_REC_3050_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3051(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3051_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3051_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3051_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3051_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3051_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3051_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3051_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3051_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3051_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3051_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3052
#define AGONY_PP_PRIVATE_EVAL_REC_3051_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3052(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3052_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3052_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3052_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3052_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3052_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3052_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3052_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3052_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3052_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3052_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3053
#define AGONY_PP_PRIVATE_EVAL_REC_3052_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3053(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3053_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3053_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3053_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3053_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3053_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3053_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3053_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3053_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3053_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3053_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3054
#define AGONY_PP_PRIVATE_EVAL_REC_3053_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3054(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3054_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3054_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3054_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3054_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3054_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3054_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3054_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3054_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3054_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3054_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3055
#define AGONY_PP_PRIVATE_EVAL_REC_3054_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3055(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3055_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3055_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3055_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3055_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3055_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3055_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3055_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3055_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3055_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3055_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3056
#define AGONY_PP_PRIVATE_EVAL_REC_3055_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3056(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3056_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3056_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3056_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3056_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3056_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3056_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3056_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3056_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3056_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3056_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3057
#define AGONY_PP_PRIVATE_EVAL_REC_3056_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3057(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3057_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3057_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3057_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3057_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3057_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3057_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3057_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3057_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3057_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3057_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3058
#define AGONY_PP_PRIVATE_EVAL_REC_3057_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3058(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3058_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3058_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3058_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3058_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3058_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3058_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3058_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3058_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3058_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3058_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3059
#define AGONY_PP_PRIVATE_EVAL_REC_3058_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3059(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3059_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3059_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3059_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3059_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3059_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3059_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3059_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3059_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3059_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3059_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3060
#define AGONY_PP_PRIVATE_EVAL_REC_3059_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3060(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3060_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3060_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3060_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3060_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3060_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3060_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3060_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3060_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3060_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3060_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3061
#define AGONY_PP_PRIVATE_EVAL_REC_3060_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3061(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3061_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3061_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3061_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3061_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3061_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3061_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3061_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3061_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3061_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3061_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3062
#define AGONY_PP_PRIVATE_EVAL_REC_3061_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3062(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3062_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3062_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3062_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3062_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3062_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3062_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3062_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3062_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3062_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3062_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3063
#define AGONY_PP_PRIVATE_EVAL_REC_3062_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3063(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3063_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3063_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3063_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3063_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3063_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3063_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3063_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3063_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3063_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3063_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3064
#define AGONY_PP_PRIVATE_EVAL_REC_3063_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3064(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3064_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3064_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3064_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3064_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3064_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3064_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3064_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3064_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3064_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3064_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3065
#define AGONY_PP_PRIVATE_EVAL_REC_3064_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3065(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3065_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3065_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3065_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3065_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3065_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3065_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3065_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3065_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3065_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3065_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3066
#define AGONY_PP_PRIVATE_EVAL_REC_3065_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3066(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3066_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3066_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3066_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3066_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3066_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3066_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3066_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3066_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3066_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3066_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3067
#define AGONY_PP_PRIVATE_EVAL_REC_3066_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3067(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3067_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3067_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3067_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3067_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3067_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3067_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3067_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3067_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3067_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3067_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3068
#define AGONY_PP_PRIVATE_EVAL_REC_3067_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3068(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3068_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3068_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3068_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3068_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3068_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3068_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3068_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3068_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3068_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3068_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3069
#define AGONY_PP_PRIVATE_EVAL_REC_3068_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3069(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3069_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3069_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3069_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3069_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3069_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3069_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3069_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3069_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3069_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3069_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3070
#define AGONY_PP_PRIVATE_EVAL_REC_3069_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3070(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3070_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3070_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3070_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3070_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3070_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3070_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3070_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3070_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3070_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3070_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3071
#define AGONY_PP_PRIVATE_EVAL_REC_3070_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3071(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3071_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3071_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3071_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3071_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3071_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3071_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3071_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3071_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3071_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3071_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3072
#define AGONY_PP_PRIVATE_EVAL_REC_3071_STOP(...) __VA_ARGS__

#endif // AGONY_PP_EVAL_REC_UNROLL_2048_TO_3071_H
