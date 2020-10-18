#ifndef MACROLOP_EVAL_REC_UNROLL_15360_TO_16383_H
#undef MACROLOP_EVAL_REC_UNROLL_15360_TO_16383_H

#define MACROLOP_PRIVATE_EVAL_REC_15360(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15360_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15360_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15360_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15360_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15361
#define MACROLOP_PRIVATE_EVAL_REC_15360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15361(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15361_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15361_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15361_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15361_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15362
#define MACROLOP_PRIVATE_EVAL_REC_15361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15362(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15362_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15362_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15362_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15362_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15363
#define MACROLOP_PRIVATE_EVAL_REC_15362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15363(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15363_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15363_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15363_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15363_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15364
#define MACROLOP_PRIVATE_EVAL_REC_15363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15364(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15364_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15364_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15364_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15364_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15365
#define MACROLOP_PRIVATE_EVAL_REC_15364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15365(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15365_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15365_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15365_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15365_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15366
#define MACROLOP_PRIVATE_EVAL_REC_15365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15366(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15366_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15366_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15366_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15366_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15367
#define MACROLOP_PRIVATE_EVAL_REC_15366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15367(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15367_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15367_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15367_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15367_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15368
#define MACROLOP_PRIVATE_EVAL_REC_15367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15368(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15368_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15368_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15368_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15368_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15369
#define MACROLOP_PRIVATE_EVAL_REC_15368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15369(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15369_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15369_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15369_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15369_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15370
#define MACROLOP_PRIVATE_EVAL_REC_15369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15370(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15370_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15370_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15370_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15370_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15371
#define MACROLOP_PRIVATE_EVAL_REC_15370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15371(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15371_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15371_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15371_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15371_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15372
#define MACROLOP_PRIVATE_EVAL_REC_15371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15372(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15372_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15372_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15372_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15372_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15373
#define MACROLOP_PRIVATE_EVAL_REC_15372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15373(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15373_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15373_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15373_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15373_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15374
#define MACROLOP_PRIVATE_EVAL_REC_15373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15374(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15374_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15374_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15374_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15374_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15375
#define MACROLOP_PRIVATE_EVAL_REC_15374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15375(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15375_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15375_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15375_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15375_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15376
#define MACROLOP_PRIVATE_EVAL_REC_15375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15376(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15376_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15376_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15376_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15376_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15377
#define MACROLOP_PRIVATE_EVAL_REC_15376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15377(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15377_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15377_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15377_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15377_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15378
#define MACROLOP_PRIVATE_EVAL_REC_15377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15378(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15378_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15378_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15378_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15378_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15379
#define MACROLOP_PRIVATE_EVAL_REC_15378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15379(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15379_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15379_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15379_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15379_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15380
#define MACROLOP_PRIVATE_EVAL_REC_15379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15380(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15380_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15380_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15380_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15380_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15381
#define MACROLOP_PRIVATE_EVAL_REC_15380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15381(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15381_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15381_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15381_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15381_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15382
#define MACROLOP_PRIVATE_EVAL_REC_15381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15382(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15382_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15382_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15382_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15382_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15383
#define MACROLOP_PRIVATE_EVAL_REC_15382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15383(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15383_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15383_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15383_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15383_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15384
#define MACROLOP_PRIVATE_EVAL_REC_15383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15384(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15384_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15384_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15384_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15384_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15385
#define MACROLOP_PRIVATE_EVAL_REC_15384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15385(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15385_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15385_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15385_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15385_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15386
#define MACROLOP_PRIVATE_EVAL_REC_15385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15386(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15386_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15386_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15386_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15386_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15387
#define MACROLOP_PRIVATE_EVAL_REC_15386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15387(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15387_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15387_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15387_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15387_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15388
#define MACROLOP_PRIVATE_EVAL_REC_15387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15388(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15388_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15388_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15388_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15388_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15389
#define MACROLOP_PRIVATE_EVAL_REC_15388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15389(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15389_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15389_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15389_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15389_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15390
#define MACROLOP_PRIVATE_EVAL_REC_15389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15390(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15390_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15390_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15390_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15390_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15391
#define MACROLOP_PRIVATE_EVAL_REC_15390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15391(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15391_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15391_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15391_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15391_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15392
#define MACROLOP_PRIVATE_EVAL_REC_15391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15392(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15392_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15392_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15392_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15392_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15393
#define MACROLOP_PRIVATE_EVAL_REC_15392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15393(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15393_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15393_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15393_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15393_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15394
#define MACROLOP_PRIVATE_EVAL_REC_15393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15394(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15394_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15394_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15394_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15394_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15395
#define MACROLOP_PRIVATE_EVAL_REC_15394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15395(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15395_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15395_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15395_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15395_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15396
#define MACROLOP_PRIVATE_EVAL_REC_15395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15396(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15396_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15396_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15396_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15396_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15397
#define MACROLOP_PRIVATE_EVAL_REC_15396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15397(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15397_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15397_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15397_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15397_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15398
#define MACROLOP_PRIVATE_EVAL_REC_15397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15398(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15398_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15398_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15398_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15398_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15399
#define MACROLOP_PRIVATE_EVAL_REC_15398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15399(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15399_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15399_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15399_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15399_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15400
#define MACROLOP_PRIVATE_EVAL_REC_15399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15400(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15400_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15400_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15400_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15400_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15401
#define MACROLOP_PRIVATE_EVAL_REC_15400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15401(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15401_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15401_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15401_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15401_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15402
#define MACROLOP_PRIVATE_EVAL_REC_15401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15402(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15402_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15402_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15402_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15402_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15403
#define MACROLOP_PRIVATE_EVAL_REC_15402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15403(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15403_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15403_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15403_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15403_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15404
#define MACROLOP_PRIVATE_EVAL_REC_15403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15404(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15404_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15404_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15404_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15404_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15405
#define MACROLOP_PRIVATE_EVAL_REC_15404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15405(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15405_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15405_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15405_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15405_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15406
#define MACROLOP_PRIVATE_EVAL_REC_15405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15406(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15406_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15406_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15406_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15406_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15407
#define MACROLOP_PRIVATE_EVAL_REC_15406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15407(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15407_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15407_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15407_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15407_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15408
#define MACROLOP_PRIVATE_EVAL_REC_15407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15408(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15408_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15408_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15408_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15408_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15409
#define MACROLOP_PRIVATE_EVAL_REC_15408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15409(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15409_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15409_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15409_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15409_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15410
#define MACROLOP_PRIVATE_EVAL_REC_15409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15410(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15410_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15410_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15410_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15410_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15411
#define MACROLOP_PRIVATE_EVAL_REC_15410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15411(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15411_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15411_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15411_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15411_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15412
#define MACROLOP_PRIVATE_EVAL_REC_15411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15412(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15412_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15412_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15412_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15412_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15413
#define MACROLOP_PRIVATE_EVAL_REC_15412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15413(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15413_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15413_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15413_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15413_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15414
#define MACROLOP_PRIVATE_EVAL_REC_15413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15414(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15414_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15414_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15414_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15414_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15415
#define MACROLOP_PRIVATE_EVAL_REC_15414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15415(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15415_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15415_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15415_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15415_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15416
#define MACROLOP_PRIVATE_EVAL_REC_15415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15416(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15416_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15416_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15416_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15416_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15417
#define MACROLOP_PRIVATE_EVAL_REC_15416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15417(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15417_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15417_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15417_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15417_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15418
#define MACROLOP_PRIVATE_EVAL_REC_15417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15418(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15418_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15418_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15418_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15418_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15419
#define MACROLOP_PRIVATE_EVAL_REC_15418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15419(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15419_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15419_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15419_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15419_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15420
#define MACROLOP_PRIVATE_EVAL_REC_15419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15420(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15420_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15420_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15420_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15420_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15421
#define MACROLOP_PRIVATE_EVAL_REC_15420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15421(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15421_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15421_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15421_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15421_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15422
#define MACROLOP_PRIVATE_EVAL_REC_15421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15422(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15422_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15422_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15422_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15422_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15423
#define MACROLOP_PRIVATE_EVAL_REC_15422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15423(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15423_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15423_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15423_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15423_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15424
#define MACROLOP_PRIVATE_EVAL_REC_15423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15424(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15424_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15424_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15424_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15424_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15425
#define MACROLOP_PRIVATE_EVAL_REC_15424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15425(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15425_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15425_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15425_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15425_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15426
#define MACROLOP_PRIVATE_EVAL_REC_15425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15426(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15426_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15426_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15426_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15426_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15427
#define MACROLOP_PRIVATE_EVAL_REC_15426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15427(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15427_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15427_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15427_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15427_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15428
#define MACROLOP_PRIVATE_EVAL_REC_15427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15428(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15428_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15428_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15428_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15428_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15429
#define MACROLOP_PRIVATE_EVAL_REC_15428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15429(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15429_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15429_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15429_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15429_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15430
#define MACROLOP_PRIVATE_EVAL_REC_15429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15430(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15430_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15430_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15430_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15430_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15431
#define MACROLOP_PRIVATE_EVAL_REC_15430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15431(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15431_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15431_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15431_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15431_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15432
#define MACROLOP_PRIVATE_EVAL_REC_15431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15432(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15432_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15432_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15432_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15432_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15433
#define MACROLOP_PRIVATE_EVAL_REC_15432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15433(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15433_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15433_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15433_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15433_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15434
#define MACROLOP_PRIVATE_EVAL_REC_15433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15434(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15434_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15434_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15434_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15434_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15435
#define MACROLOP_PRIVATE_EVAL_REC_15434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15435(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15435_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15435_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15435_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15435_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15436
#define MACROLOP_PRIVATE_EVAL_REC_15435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15436(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15436_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15436_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15436_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15436_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15437
#define MACROLOP_PRIVATE_EVAL_REC_15436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15437(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15437_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15437_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15437_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15437_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15438
#define MACROLOP_PRIVATE_EVAL_REC_15437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15438(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15438_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15438_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15438_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15438_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15439
#define MACROLOP_PRIVATE_EVAL_REC_15438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15439(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15439_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15439_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15439_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15439_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15440
#define MACROLOP_PRIVATE_EVAL_REC_15439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15440(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15440_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15440_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15440_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15440_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15441
#define MACROLOP_PRIVATE_EVAL_REC_15440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15441(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15441_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15441_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15441_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15441_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15442
#define MACROLOP_PRIVATE_EVAL_REC_15441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15442(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15442_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15442_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15442_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15442_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15443
#define MACROLOP_PRIVATE_EVAL_REC_15442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15443(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15443_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15443_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15443_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15443_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15444
#define MACROLOP_PRIVATE_EVAL_REC_15443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15444(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15444_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15444_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15444_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15444_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15445
#define MACROLOP_PRIVATE_EVAL_REC_15444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15445(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15445_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15445_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15445_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15445_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15446
#define MACROLOP_PRIVATE_EVAL_REC_15445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15446(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15446_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15446_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15446_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15446_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15447
#define MACROLOP_PRIVATE_EVAL_REC_15446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15447(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15447_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15447_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15447_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15447_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15448
#define MACROLOP_PRIVATE_EVAL_REC_15447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15448(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15448_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15448_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15448_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15448_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15449
#define MACROLOP_PRIVATE_EVAL_REC_15448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15449(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15449_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15449_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15449_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15449_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15450
#define MACROLOP_PRIVATE_EVAL_REC_15449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15450(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15450_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15450_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15450_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15450_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15451
#define MACROLOP_PRIVATE_EVAL_REC_15450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15451(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15451_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15451_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15451_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15451_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15452
#define MACROLOP_PRIVATE_EVAL_REC_15451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15452(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15452_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15452_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15452_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15452_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15453
#define MACROLOP_PRIVATE_EVAL_REC_15452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15453(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15453_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15453_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15453_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15453_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15454
#define MACROLOP_PRIVATE_EVAL_REC_15453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15454(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15454_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15454_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15454_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15454_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15455
#define MACROLOP_PRIVATE_EVAL_REC_15454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15455(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15455_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15455_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15455_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15455_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15456
#define MACROLOP_PRIVATE_EVAL_REC_15455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15456(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15456_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15456_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15456_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15456_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15457
#define MACROLOP_PRIVATE_EVAL_REC_15456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15457(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15457_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15457_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15457_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15457_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15458
#define MACROLOP_PRIVATE_EVAL_REC_15457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15458(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15458_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15458_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15458_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15458_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15459
#define MACROLOP_PRIVATE_EVAL_REC_15458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15459(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15459_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15459_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15459_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15459_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15460
#define MACROLOP_PRIVATE_EVAL_REC_15459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15460(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15460_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15460_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15460_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15460_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15461
#define MACROLOP_PRIVATE_EVAL_REC_15460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15461(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15461_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15461_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15461_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15461_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15462
#define MACROLOP_PRIVATE_EVAL_REC_15461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15462(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15462_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15462_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15462_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15462_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15463
#define MACROLOP_PRIVATE_EVAL_REC_15462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15463(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15463_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15463_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15463_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15463_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15464
#define MACROLOP_PRIVATE_EVAL_REC_15463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15464(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15464_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15464_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15464_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15464_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15465
#define MACROLOP_PRIVATE_EVAL_REC_15464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15465(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15465_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15465_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15465_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15465_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15466
#define MACROLOP_PRIVATE_EVAL_REC_15465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15466(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15466_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15466_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15466_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15466_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15467
#define MACROLOP_PRIVATE_EVAL_REC_15466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15467(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15467_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15467_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15467_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15467_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15468
#define MACROLOP_PRIVATE_EVAL_REC_15467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15468(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15468_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15468_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15468_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15468_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15469
#define MACROLOP_PRIVATE_EVAL_REC_15468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15469(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15469_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15469_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15469_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15469_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15470
#define MACROLOP_PRIVATE_EVAL_REC_15469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15470(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15470_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15470_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15470_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15470_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15471
#define MACROLOP_PRIVATE_EVAL_REC_15470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15471(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15471_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15471_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15471_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15471_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15472
#define MACROLOP_PRIVATE_EVAL_REC_15471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15472(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15472_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15472_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15472_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15472_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15473
#define MACROLOP_PRIVATE_EVAL_REC_15472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15473(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15473_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15473_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15473_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15473_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15474
#define MACROLOP_PRIVATE_EVAL_REC_15473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15474(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15474_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15474_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15474_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15474_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15475
#define MACROLOP_PRIVATE_EVAL_REC_15474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15475(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15475_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15475_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15475_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15475_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15476
#define MACROLOP_PRIVATE_EVAL_REC_15475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15476(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15476_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15476_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15476_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15476_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15477
#define MACROLOP_PRIVATE_EVAL_REC_15476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15477(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15477_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15477_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15477_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15477_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15478
#define MACROLOP_PRIVATE_EVAL_REC_15477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15478(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15478_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15478_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15478_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15478_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15479
#define MACROLOP_PRIVATE_EVAL_REC_15478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15479(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15479_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15479_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15479_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15479_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15480
#define MACROLOP_PRIVATE_EVAL_REC_15479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15480(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15480_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15480_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15480_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15480_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15481
#define MACROLOP_PRIVATE_EVAL_REC_15480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15481(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15481_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15481_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15481_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15481_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15482
#define MACROLOP_PRIVATE_EVAL_REC_15481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15482(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15482_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15482_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15482_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15482_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15483
#define MACROLOP_PRIVATE_EVAL_REC_15482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15483(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15483_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15483_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15483_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15483_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15484
#define MACROLOP_PRIVATE_EVAL_REC_15483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15484(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15484_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15484_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15484_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15484_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15485
#define MACROLOP_PRIVATE_EVAL_REC_15484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15485(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15485_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15485_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15485_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15485_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15486
#define MACROLOP_PRIVATE_EVAL_REC_15485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15486(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15486_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15486_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15486_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15486_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15487
#define MACROLOP_PRIVATE_EVAL_REC_15486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15487(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15487_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15487_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15487_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15487_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15488
#define MACROLOP_PRIVATE_EVAL_REC_15487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15488(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15488_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15488_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15488_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15488_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15489
#define MACROLOP_PRIVATE_EVAL_REC_15488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15489(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15489_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15489_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15489_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15489_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15490
#define MACROLOP_PRIVATE_EVAL_REC_15489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15490(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15490_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15490_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15490_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15490_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15491
#define MACROLOP_PRIVATE_EVAL_REC_15490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15491(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15491_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15491_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15491_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15491_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15492
#define MACROLOP_PRIVATE_EVAL_REC_15491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15492(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15492_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15492_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15492_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15492_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15493
#define MACROLOP_PRIVATE_EVAL_REC_15492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15493(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15493_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15493_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15493_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15493_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15494
#define MACROLOP_PRIVATE_EVAL_REC_15493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15494(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15494_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15494_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15494_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15494_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15495
#define MACROLOP_PRIVATE_EVAL_REC_15494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15495(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15495_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15495_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15495_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15495_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15496
#define MACROLOP_PRIVATE_EVAL_REC_15495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15496(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15496_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15496_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15496_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15496_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15497
#define MACROLOP_PRIVATE_EVAL_REC_15496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15497(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15497_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15497_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15497_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15497_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15498
#define MACROLOP_PRIVATE_EVAL_REC_15497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15498(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15498_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15498_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15498_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15498_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15499
#define MACROLOP_PRIVATE_EVAL_REC_15498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15499(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15499_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15499_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15499_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15499_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15500
#define MACROLOP_PRIVATE_EVAL_REC_15499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15500(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15500_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15500_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15500_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15500_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15501
#define MACROLOP_PRIVATE_EVAL_REC_15500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15501(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15501_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15501_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15501_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15501_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15502
#define MACROLOP_PRIVATE_EVAL_REC_15501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15502(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15502_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15502_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15502_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15502_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15503
#define MACROLOP_PRIVATE_EVAL_REC_15502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15503(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15503_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15503_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15503_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15503_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15504
#define MACROLOP_PRIVATE_EVAL_REC_15503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15504(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15504_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15504_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15504_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15504_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15505
#define MACROLOP_PRIVATE_EVAL_REC_15504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15505(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15505_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15505_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15505_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15505_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15506
#define MACROLOP_PRIVATE_EVAL_REC_15505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15506(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15506_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15506_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15506_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15506_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15507
#define MACROLOP_PRIVATE_EVAL_REC_15506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15507(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15507_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15507_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15507_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15507_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15508
#define MACROLOP_PRIVATE_EVAL_REC_15507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15508(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15508_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15508_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15508_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15508_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15509
#define MACROLOP_PRIVATE_EVAL_REC_15508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15509(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15509_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15509_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15509_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15509_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15510
#define MACROLOP_PRIVATE_EVAL_REC_15509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15510(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15510_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15510_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15510_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15510_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15511
#define MACROLOP_PRIVATE_EVAL_REC_15510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15511(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15511_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15511_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15511_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15511_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15512
#define MACROLOP_PRIVATE_EVAL_REC_15511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15512(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15512_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15512_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15512_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15512_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15513
#define MACROLOP_PRIVATE_EVAL_REC_15512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15513(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15513_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15513_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15513_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15513_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15514
#define MACROLOP_PRIVATE_EVAL_REC_15513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15514(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15514_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15514_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15514_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15514_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15515
#define MACROLOP_PRIVATE_EVAL_REC_15514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15515(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15515_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15515_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15515_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15515_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15516
#define MACROLOP_PRIVATE_EVAL_REC_15515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15516(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15516_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15516_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15516_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15516_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15517
#define MACROLOP_PRIVATE_EVAL_REC_15516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15517(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15517_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15517_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15517_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15517_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15518
#define MACROLOP_PRIVATE_EVAL_REC_15517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15518(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15518_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15518_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15518_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15518_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15519
#define MACROLOP_PRIVATE_EVAL_REC_15518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15519(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15519_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15519_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15519_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15519_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15520
#define MACROLOP_PRIVATE_EVAL_REC_15519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15520(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15520_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15520_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15520_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15520_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15521
#define MACROLOP_PRIVATE_EVAL_REC_15520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15521(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15521_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15521_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15521_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15521_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15522
#define MACROLOP_PRIVATE_EVAL_REC_15521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15522(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15522_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15522_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15522_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15522_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15523
#define MACROLOP_PRIVATE_EVAL_REC_15522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15523(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15523_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15523_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15523_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15523_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15524
#define MACROLOP_PRIVATE_EVAL_REC_15523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15524(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15524_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15524_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15524_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15524_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15525
#define MACROLOP_PRIVATE_EVAL_REC_15524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15525(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15525_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15525_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15525_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15525_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15526
#define MACROLOP_PRIVATE_EVAL_REC_15525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15526(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15526_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15526_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15526_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15526_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15527
#define MACROLOP_PRIVATE_EVAL_REC_15526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15527(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15527_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15527_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15527_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15527_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15528
#define MACROLOP_PRIVATE_EVAL_REC_15527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15528(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15528_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15528_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15528_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15528_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15529
#define MACROLOP_PRIVATE_EVAL_REC_15528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15529(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15529_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15529_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15529_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15529_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15530
#define MACROLOP_PRIVATE_EVAL_REC_15529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15530(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15530_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15530_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15530_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15530_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15531
#define MACROLOP_PRIVATE_EVAL_REC_15530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15531(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15531_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15531_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15531_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15531_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15532
#define MACROLOP_PRIVATE_EVAL_REC_15531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15532(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15532_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15532_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15532_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15532_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15533
#define MACROLOP_PRIVATE_EVAL_REC_15532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15533(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15533_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15533_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15533_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15533_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15534
#define MACROLOP_PRIVATE_EVAL_REC_15533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15534(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15534_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15534_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15534_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15534_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15535
#define MACROLOP_PRIVATE_EVAL_REC_15534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15535(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15535_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15535_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15535_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15535_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15536
#define MACROLOP_PRIVATE_EVAL_REC_15535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15536(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15536_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15536_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15536_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15536_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15537
#define MACROLOP_PRIVATE_EVAL_REC_15536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15537(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15537_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15537_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15537_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15537_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15538
#define MACROLOP_PRIVATE_EVAL_REC_15537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15538(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15538_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15538_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15538_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15538_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15539
#define MACROLOP_PRIVATE_EVAL_REC_15538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15539(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15539_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15539_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15539_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15539_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15540
#define MACROLOP_PRIVATE_EVAL_REC_15539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15540(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15540_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15540_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15540_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15540_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15541
#define MACROLOP_PRIVATE_EVAL_REC_15540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15541(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15541_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15541_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15541_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15541_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15542
#define MACROLOP_PRIVATE_EVAL_REC_15541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15542(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15542_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15542_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15542_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15542_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15543
#define MACROLOP_PRIVATE_EVAL_REC_15542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15543(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15543_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15543_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15543_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15543_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15544
#define MACROLOP_PRIVATE_EVAL_REC_15543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15544(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15544_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15544_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15544_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15544_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15545
#define MACROLOP_PRIVATE_EVAL_REC_15544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15545(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15545_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15545_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15545_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15545_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15546
#define MACROLOP_PRIVATE_EVAL_REC_15545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15546(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15546_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15546_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15546_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15546_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15547
#define MACROLOP_PRIVATE_EVAL_REC_15546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15547(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15547_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15547_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15547_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15547_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15548
#define MACROLOP_PRIVATE_EVAL_REC_15547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15548(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15548_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15548_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15548_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15548_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15549
#define MACROLOP_PRIVATE_EVAL_REC_15548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15549(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15549_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15549_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15549_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15549_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15550
#define MACROLOP_PRIVATE_EVAL_REC_15549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15550(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15550_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15550_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15550_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15550_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15551
#define MACROLOP_PRIVATE_EVAL_REC_15550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15551(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15551_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15551_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15551_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15551_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15552
#define MACROLOP_PRIVATE_EVAL_REC_15551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15552(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15552_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15552_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15552_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15552_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15553
#define MACROLOP_PRIVATE_EVAL_REC_15552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15553(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15553_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15553_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15553_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15553_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15554
#define MACROLOP_PRIVATE_EVAL_REC_15553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15554(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15554_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15554_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15554_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15554_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15555
#define MACROLOP_PRIVATE_EVAL_REC_15554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15555(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15555_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15555_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15555_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15555_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15556
#define MACROLOP_PRIVATE_EVAL_REC_15555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15556(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15556_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15556_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15556_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15556_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15557
#define MACROLOP_PRIVATE_EVAL_REC_15556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15557(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15557_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15557_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15557_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15557_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15558
#define MACROLOP_PRIVATE_EVAL_REC_15557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15558(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15558_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15558_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15558_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15558_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15559
#define MACROLOP_PRIVATE_EVAL_REC_15558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15559(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15559_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15559_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15559_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15559_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15560
#define MACROLOP_PRIVATE_EVAL_REC_15559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15560(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15560_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15560_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15560_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15560_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15561
#define MACROLOP_PRIVATE_EVAL_REC_15560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15561(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15561_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15561_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15561_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15561_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15562
#define MACROLOP_PRIVATE_EVAL_REC_15561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15562(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15562_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15562_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15562_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15562_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15563
#define MACROLOP_PRIVATE_EVAL_REC_15562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15563(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15563_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15563_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15563_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15563_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15564
#define MACROLOP_PRIVATE_EVAL_REC_15563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15564(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15564_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15564_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15564_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15564_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15565
#define MACROLOP_PRIVATE_EVAL_REC_15564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15565(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15565_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15565_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15565_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15565_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15566
#define MACROLOP_PRIVATE_EVAL_REC_15565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15566(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15566_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15566_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15566_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15566_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15567
#define MACROLOP_PRIVATE_EVAL_REC_15566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15567(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15567_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15567_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15567_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15567_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15568
#define MACROLOP_PRIVATE_EVAL_REC_15567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15568(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15568_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15568_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15568_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15568_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15569
#define MACROLOP_PRIVATE_EVAL_REC_15568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15569(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15569_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15569_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15569_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15569_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15570
#define MACROLOP_PRIVATE_EVAL_REC_15569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15570(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15570_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15570_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15570_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15570_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15571
#define MACROLOP_PRIVATE_EVAL_REC_15570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15571(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15571_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15571_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15571_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15571_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15572
#define MACROLOP_PRIVATE_EVAL_REC_15571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15572(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15572_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15572_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15572_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15572_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15573
#define MACROLOP_PRIVATE_EVAL_REC_15572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15573(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15573_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15573_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15573_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15573_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15574
#define MACROLOP_PRIVATE_EVAL_REC_15573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15574(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15574_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15574_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15574_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15574_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15575
#define MACROLOP_PRIVATE_EVAL_REC_15574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15575(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15575_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15575_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15575_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15575_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15576
#define MACROLOP_PRIVATE_EVAL_REC_15575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15576(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15576_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15576_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15576_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15576_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15577
#define MACROLOP_PRIVATE_EVAL_REC_15576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15577(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15577_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15577_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15577_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15577_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15578
#define MACROLOP_PRIVATE_EVAL_REC_15577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15578(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15578_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15578_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15578_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15578_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15579
#define MACROLOP_PRIVATE_EVAL_REC_15578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15579(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15579_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15579_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15579_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15579_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15580
#define MACROLOP_PRIVATE_EVAL_REC_15579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15580(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15580_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15580_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15580_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15580_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15581
#define MACROLOP_PRIVATE_EVAL_REC_15580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15581(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15581_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15581_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15581_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15581_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15582
#define MACROLOP_PRIVATE_EVAL_REC_15581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15582(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15582_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15582_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15582_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15582_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15583
#define MACROLOP_PRIVATE_EVAL_REC_15582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15583(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15583_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15583_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15583_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15583_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15584
#define MACROLOP_PRIVATE_EVAL_REC_15583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15584(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15584_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15584_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15584_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15584_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15585
#define MACROLOP_PRIVATE_EVAL_REC_15584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15585(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15585_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15585_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15585_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15585_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15586
#define MACROLOP_PRIVATE_EVAL_REC_15585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15586(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15586_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15586_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15586_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15586_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15587
#define MACROLOP_PRIVATE_EVAL_REC_15586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15587(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15587_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15587_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15587_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15587_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15588
#define MACROLOP_PRIVATE_EVAL_REC_15587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15588(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15588_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15588_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15588_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15588_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15589
#define MACROLOP_PRIVATE_EVAL_REC_15588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15589(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15589_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15589_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15589_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15589_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15590
#define MACROLOP_PRIVATE_EVAL_REC_15589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15590(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15590_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15590_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15590_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15590_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15591
#define MACROLOP_PRIVATE_EVAL_REC_15590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15591(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15591_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15591_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15591_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15591_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15592
#define MACROLOP_PRIVATE_EVAL_REC_15591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15592(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15592_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15592_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15592_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15592_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15593
#define MACROLOP_PRIVATE_EVAL_REC_15592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15593(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15593_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15593_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15593_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15593_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15594
#define MACROLOP_PRIVATE_EVAL_REC_15593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15594(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15594_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15594_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15594_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15594_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15595
#define MACROLOP_PRIVATE_EVAL_REC_15594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15595(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15595_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15595_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15595_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15595_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15596
#define MACROLOP_PRIVATE_EVAL_REC_15595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15596(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15596_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15596_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15596_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15596_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15597
#define MACROLOP_PRIVATE_EVAL_REC_15596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15597(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15597_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15597_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15597_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15597_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15598
#define MACROLOP_PRIVATE_EVAL_REC_15597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15598(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15598_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15598_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15598_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15598_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15599
#define MACROLOP_PRIVATE_EVAL_REC_15598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15599(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15599_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15599_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15599_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15599_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15600
#define MACROLOP_PRIVATE_EVAL_REC_15599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15600(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15600_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15600_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15600_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15600_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15601
#define MACROLOP_PRIVATE_EVAL_REC_15600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15601(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15601_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15601_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15601_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15601_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15602
#define MACROLOP_PRIVATE_EVAL_REC_15601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15602(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15602_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15602_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15602_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15602_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15603
#define MACROLOP_PRIVATE_EVAL_REC_15602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15603(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15603_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15603_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15603_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15603_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15604
#define MACROLOP_PRIVATE_EVAL_REC_15603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15604(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15604_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15604_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15604_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15604_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15605
#define MACROLOP_PRIVATE_EVAL_REC_15604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15605(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15605_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15605_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15605_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15605_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15606
#define MACROLOP_PRIVATE_EVAL_REC_15605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15606(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15606_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15606_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15606_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15606_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15607
#define MACROLOP_PRIVATE_EVAL_REC_15606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15607(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15607_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15607_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15607_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15607_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15608
#define MACROLOP_PRIVATE_EVAL_REC_15607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15608(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15608_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15608_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15608_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15608_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15609
#define MACROLOP_PRIVATE_EVAL_REC_15608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15609(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15609_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15609_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15609_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15609_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15610
#define MACROLOP_PRIVATE_EVAL_REC_15609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15610(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15610_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15610_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15610_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15610_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15611
#define MACROLOP_PRIVATE_EVAL_REC_15610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15611(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15611_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15611_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15611_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15611_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15612
#define MACROLOP_PRIVATE_EVAL_REC_15611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15612(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15612_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15612_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15612_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15612_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15613
#define MACROLOP_PRIVATE_EVAL_REC_15612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15613(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15613_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15613_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15613_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15613_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15614
#define MACROLOP_PRIVATE_EVAL_REC_15613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15614(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15614_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15614_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15614_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15614_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15615
#define MACROLOP_PRIVATE_EVAL_REC_15614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15615(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15615_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15615_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15615_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15615_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15616
#define MACROLOP_PRIVATE_EVAL_REC_15615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15616(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15616_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15616_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15616_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15616_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15617
#define MACROLOP_PRIVATE_EVAL_REC_15616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15617(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15617_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15617_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15617_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15617_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15618
#define MACROLOP_PRIVATE_EVAL_REC_15617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15618(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15618_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15618_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15618_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15618_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15619
#define MACROLOP_PRIVATE_EVAL_REC_15618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15619(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15619_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15619_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15619_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15619_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15620
#define MACROLOP_PRIVATE_EVAL_REC_15619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15620(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15620_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15620_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15620_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15620_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15621
#define MACROLOP_PRIVATE_EVAL_REC_15620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15621(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15621_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15621_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15621_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15621_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15622
#define MACROLOP_PRIVATE_EVAL_REC_15621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15622(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15622_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15622_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15622_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15622_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15623
#define MACROLOP_PRIVATE_EVAL_REC_15622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15623(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15623_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15623_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15623_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15623_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15624
#define MACROLOP_PRIVATE_EVAL_REC_15623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15624(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15624_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15624_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15624_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15624_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15625
#define MACROLOP_PRIVATE_EVAL_REC_15624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15625(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15625_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15625_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15625_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15625_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15626
#define MACROLOP_PRIVATE_EVAL_REC_15625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15626(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15626_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15626_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15626_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15626_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15627
#define MACROLOP_PRIVATE_EVAL_REC_15626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15627(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15627_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15627_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15627_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15627_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15628
#define MACROLOP_PRIVATE_EVAL_REC_15627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15628(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15628_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15628_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15628_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15628_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15629
#define MACROLOP_PRIVATE_EVAL_REC_15628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15629(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15629_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15629_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15629_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15629_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15630
#define MACROLOP_PRIVATE_EVAL_REC_15629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15630(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15630_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15630_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15630_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15630_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15631
#define MACROLOP_PRIVATE_EVAL_REC_15630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15631(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15631_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15631_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15631_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15631_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15632
#define MACROLOP_PRIVATE_EVAL_REC_15631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15632(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15632_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15632_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15632_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15632_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15633
#define MACROLOP_PRIVATE_EVAL_REC_15632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15633(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15633_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15633_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15633_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15633_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15634
#define MACROLOP_PRIVATE_EVAL_REC_15633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15634(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15634_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15634_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15634_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15634_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15635
#define MACROLOP_PRIVATE_EVAL_REC_15634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15635(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15635_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15635_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15635_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15635_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15636
#define MACROLOP_PRIVATE_EVAL_REC_15635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15636(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15636_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15636_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15636_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15636_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15637
#define MACROLOP_PRIVATE_EVAL_REC_15636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15637(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15637_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15637_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15637_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15637_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15638
#define MACROLOP_PRIVATE_EVAL_REC_15637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15638(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15638_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15638_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15638_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15638_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15639
#define MACROLOP_PRIVATE_EVAL_REC_15638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15639(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15639_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15639_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15639_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15639_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15640
#define MACROLOP_PRIVATE_EVAL_REC_15639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15640(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15640_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15640_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15640_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15640_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15641
#define MACROLOP_PRIVATE_EVAL_REC_15640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15641(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15641_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15641_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15641_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15641_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15642
#define MACROLOP_PRIVATE_EVAL_REC_15641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15642(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15642_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15642_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15642_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15642_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15643
#define MACROLOP_PRIVATE_EVAL_REC_15642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15643(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15643_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15643_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15643_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15643_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15644
#define MACROLOP_PRIVATE_EVAL_REC_15643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15644(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15644_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15644_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15644_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15644_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15645
#define MACROLOP_PRIVATE_EVAL_REC_15644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15645(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15645_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15645_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15645_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15645_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15646
#define MACROLOP_PRIVATE_EVAL_REC_15645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15646(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15646_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15646_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15646_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15646_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15647
#define MACROLOP_PRIVATE_EVAL_REC_15646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15647(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15647_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15647_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15647_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15647_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15648
#define MACROLOP_PRIVATE_EVAL_REC_15647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15648(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15648_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15648_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15648_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15648_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15649
#define MACROLOP_PRIVATE_EVAL_REC_15648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15649(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15649_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15649_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15649_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15649_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15650
#define MACROLOP_PRIVATE_EVAL_REC_15649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15650(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15650_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15650_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15650_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15650_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15651
#define MACROLOP_PRIVATE_EVAL_REC_15650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15651(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15651_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15651_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15651_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15651_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15652
#define MACROLOP_PRIVATE_EVAL_REC_15651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15652(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15652_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15652_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15652_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15652_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15653
#define MACROLOP_PRIVATE_EVAL_REC_15652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15653(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15653_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15653_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15653_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15653_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15654
#define MACROLOP_PRIVATE_EVAL_REC_15653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15654(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15654_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15654_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15654_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15654_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15655
#define MACROLOP_PRIVATE_EVAL_REC_15654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15655(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15655_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15655_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15655_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15655_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15656
#define MACROLOP_PRIVATE_EVAL_REC_15655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15656(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15656_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15656_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15656_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15656_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15657
#define MACROLOP_PRIVATE_EVAL_REC_15656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15657(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15657_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15657_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15657_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15657_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15658
#define MACROLOP_PRIVATE_EVAL_REC_15657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15658(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15658_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15658_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15658_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15658_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15659
#define MACROLOP_PRIVATE_EVAL_REC_15658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15659(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15659_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15659_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15659_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15659_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15660
#define MACROLOP_PRIVATE_EVAL_REC_15659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15660(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15660_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15660_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15660_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15660_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15661
#define MACROLOP_PRIVATE_EVAL_REC_15660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15661(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15661_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15661_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15661_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15661_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15662
#define MACROLOP_PRIVATE_EVAL_REC_15661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15662(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15662_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15662_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15662_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15662_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15663
#define MACROLOP_PRIVATE_EVAL_REC_15662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15663(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15663_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15663_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15663_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15663_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15664
#define MACROLOP_PRIVATE_EVAL_REC_15663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15664(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15664_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15664_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15664_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15664_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15665
#define MACROLOP_PRIVATE_EVAL_REC_15664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15665(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15665_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15665_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15665_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15665_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15666
#define MACROLOP_PRIVATE_EVAL_REC_15665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15666(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15666_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15666_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15666_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15666_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15667
#define MACROLOP_PRIVATE_EVAL_REC_15666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15667(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15667_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15667_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15667_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15667_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15668
#define MACROLOP_PRIVATE_EVAL_REC_15667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15668(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15668_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15668_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15668_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15668_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15669
#define MACROLOP_PRIVATE_EVAL_REC_15668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15669(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15669_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15669_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15669_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15669_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15670
#define MACROLOP_PRIVATE_EVAL_REC_15669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15670(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15670_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15670_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15670_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15670_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15671
#define MACROLOP_PRIVATE_EVAL_REC_15670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15671(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15671_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15671_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15671_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15671_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15672
#define MACROLOP_PRIVATE_EVAL_REC_15671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15672(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15672_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15672_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15672_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15672_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15673
#define MACROLOP_PRIVATE_EVAL_REC_15672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15673(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15673_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15673_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15673_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15673_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15674
#define MACROLOP_PRIVATE_EVAL_REC_15673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15674(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15674_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15674_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15674_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15674_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15675
#define MACROLOP_PRIVATE_EVAL_REC_15674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15675(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15675_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15675_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15675_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15675_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15676
#define MACROLOP_PRIVATE_EVAL_REC_15675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15676(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15676_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15676_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15676_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15676_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15677
#define MACROLOP_PRIVATE_EVAL_REC_15676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15677(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15677_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15677_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15677_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15677_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15678
#define MACROLOP_PRIVATE_EVAL_REC_15677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15678(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15678_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15678_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15678_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15678_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15679
#define MACROLOP_PRIVATE_EVAL_REC_15678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15679(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15679_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15679_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15679_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15679_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15680
#define MACROLOP_PRIVATE_EVAL_REC_15679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15680(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15680_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15680_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15680_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15680_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15681
#define MACROLOP_PRIVATE_EVAL_REC_15680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15681(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15681_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15681_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15681_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15681_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15682
#define MACROLOP_PRIVATE_EVAL_REC_15681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15682(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15682_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15682_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15682_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15682_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15683
#define MACROLOP_PRIVATE_EVAL_REC_15682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15683(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15683_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15683_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15683_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15683_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15684
#define MACROLOP_PRIVATE_EVAL_REC_15683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15684(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15684_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15684_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15684_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15684_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15685
#define MACROLOP_PRIVATE_EVAL_REC_15684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15685(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15685_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15685_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15685_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15685_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15686
#define MACROLOP_PRIVATE_EVAL_REC_15685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15686(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15686_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15686_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15686_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15686_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15687
#define MACROLOP_PRIVATE_EVAL_REC_15686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15687(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15687_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15687_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15687_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15687_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15688
#define MACROLOP_PRIVATE_EVAL_REC_15687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15688(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15688_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15688_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15688_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15688_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15689
#define MACROLOP_PRIVATE_EVAL_REC_15688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15689(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15689_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15689_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15689_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15689_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15690
#define MACROLOP_PRIVATE_EVAL_REC_15689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15690(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15690_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15690_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15690_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15690_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15691
#define MACROLOP_PRIVATE_EVAL_REC_15690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15691(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15691_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15691_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15691_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15691_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15692
#define MACROLOP_PRIVATE_EVAL_REC_15691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15692(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15692_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15692_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15692_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15692_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15693
#define MACROLOP_PRIVATE_EVAL_REC_15692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15693(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15693_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15693_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15693_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15693_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15694
#define MACROLOP_PRIVATE_EVAL_REC_15693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15694(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15694_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15694_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15694_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15694_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15695
#define MACROLOP_PRIVATE_EVAL_REC_15694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15695(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15695_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15695_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15695_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15695_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15696
#define MACROLOP_PRIVATE_EVAL_REC_15695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15696(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15696_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15696_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15696_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15696_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15697
#define MACROLOP_PRIVATE_EVAL_REC_15696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15697(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15697_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15697_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15697_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15697_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15698
#define MACROLOP_PRIVATE_EVAL_REC_15697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15698(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15698_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15698_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15698_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15698_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15699
#define MACROLOP_PRIVATE_EVAL_REC_15698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15699(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15699_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15699_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15699_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15699_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15700
#define MACROLOP_PRIVATE_EVAL_REC_15699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15700(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15700_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15700_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15700_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15700_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15701
#define MACROLOP_PRIVATE_EVAL_REC_15700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15701(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15701_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15701_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15701_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15701_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15702
#define MACROLOP_PRIVATE_EVAL_REC_15701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15702(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15702_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15702_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15702_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15702_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15703
#define MACROLOP_PRIVATE_EVAL_REC_15702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15703(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15703_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15703_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15703_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15703_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15704
#define MACROLOP_PRIVATE_EVAL_REC_15703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15704(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15704_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15704_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15704_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15704_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15705
#define MACROLOP_PRIVATE_EVAL_REC_15704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15705(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15705_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15705_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15705_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15705_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15706
#define MACROLOP_PRIVATE_EVAL_REC_15705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15706(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15706_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15706_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15706_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15706_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15707
#define MACROLOP_PRIVATE_EVAL_REC_15706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15707(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15707_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15707_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15707_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15707_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15708
#define MACROLOP_PRIVATE_EVAL_REC_15707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15708(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15708_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15708_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15708_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15708_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15709
#define MACROLOP_PRIVATE_EVAL_REC_15708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15709(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15709_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15709_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15709_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15709_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15710
#define MACROLOP_PRIVATE_EVAL_REC_15709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15710(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15710_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15710_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15710_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15710_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15711
#define MACROLOP_PRIVATE_EVAL_REC_15710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15711(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15711_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15711_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15711_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15711_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15712
#define MACROLOP_PRIVATE_EVAL_REC_15711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15712(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15712_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15712_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15712_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15712_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15713
#define MACROLOP_PRIVATE_EVAL_REC_15712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15713(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15713_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15713_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15713_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15713_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15714
#define MACROLOP_PRIVATE_EVAL_REC_15713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15714(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15714_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15714_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15714_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15714_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15715
#define MACROLOP_PRIVATE_EVAL_REC_15714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15715(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15715_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15715_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15715_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15715_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15716
#define MACROLOP_PRIVATE_EVAL_REC_15715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15716(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15716_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15716_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15716_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15716_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15717
#define MACROLOP_PRIVATE_EVAL_REC_15716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15717(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15717_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15717_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15717_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15717_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15718
#define MACROLOP_PRIVATE_EVAL_REC_15717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15718(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15718_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15718_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15718_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15718_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15719
#define MACROLOP_PRIVATE_EVAL_REC_15718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15719(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15719_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15719_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15719_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15719_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15720
#define MACROLOP_PRIVATE_EVAL_REC_15719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15720(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15720_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15720_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15720_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15720_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15721
#define MACROLOP_PRIVATE_EVAL_REC_15720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15721(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15721_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15721_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15721_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15721_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15722
#define MACROLOP_PRIVATE_EVAL_REC_15721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15722(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15722_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15722_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15722_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15722_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15723
#define MACROLOP_PRIVATE_EVAL_REC_15722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15723(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15723_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15723_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15723_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15723_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15724
#define MACROLOP_PRIVATE_EVAL_REC_15723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15724(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15724_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15724_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15724_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15724_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15725
#define MACROLOP_PRIVATE_EVAL_REC_15724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15725(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15725_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15725_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15725_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15725_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15726
#define MACROLOP_PRIVATE_EVAL_REC_15725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15726(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15726_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15726_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15726_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15726_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15727
#define MACROLOP_PRIVATE_EVAL_REC_15726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15727(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15727_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15727_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15727_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15727_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15728
#define MACROLOP_PRIVATE_EVAL_REC_15727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15728(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15728_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15728_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15728_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15728_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15729
#define MACROLOP_PRIVATE_EVAL_REC_15728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15729(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15729_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15729_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15729_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15729_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15730
#define MACROLOP_PRIVATE_EVAL_REC_15729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15730(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15730_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15730_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15730_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15730_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15731
#define MACROLOP_PRIVATE_EVAL_REC_15730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15731(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15731_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15731_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15731_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15731_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15732
#define MACROLOP_PRIVATE_EVAL_REC_15731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15732(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15732_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15732_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15732_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15732_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15733
#define MACROLOP_PRIVATE_EVAL_REC_15732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15733(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15733_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15733_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15733_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15733_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15734
#define MACROLOP_PRIVATE_EVAL_REC_15733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15734(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15734_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15734_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15734_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15734_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15735
#define MACROLOP_PRIVATE_EVAL_REC_15734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15735(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15735_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15735_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15735_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15735_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15736
#define MACROLOP_PRIVATE_EVAL_REC_15735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15736(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15736_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15736_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15736_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15736_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15737
#define MACROLOP_PRIVATE_EVAL_REC_15736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15737(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15737_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15737_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15737_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15737_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15738
#define MACROLOP_PRIVATE_EVAL_REC_15737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15738(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15738_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15738_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15738_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15738_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15739
#define MACROLOP_PRIVATE_EVAL_REC_15738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15739(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15739_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15739_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15739_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15739_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15740
#define MACROLOP_PRIVATE_EVAL_REC_15739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15740(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15740_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15740_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15740_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15740_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15741
#define MACROLOP_PRIVATE_EVAL_REC_15740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15741(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15741_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15741_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15741_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15741_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15742
#define MACROLOP_PRIVATE_EVAL_REC_15741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15742(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15742_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15742_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15742_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15742_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15743
#define MACROLOP_PRIVATE_EVAL_REC_15742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15743(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15743_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15743_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15743_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15743_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15744
#define MACROLOP_PRIVATE_EVAL_REC_15743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15744(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15744_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15744_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15744_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15744_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15745
#define MACROLOP_PRIVATE_EVAL_REC_15744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15745(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15745_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15745_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15745_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15745_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15746
#define MACROLOP_PRIVATE_EVAL_REC_15745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15746(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15746_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15746_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15746_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15746_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15747
#define MACROLOP_PRIVATE_EVAL_REC_15746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15747(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15747_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15747_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15747_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15747_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15748
#define MACROLOP_PRIVATE_EVAL_REC_15747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15748(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15748_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15748_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15748_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15748_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15749
#define MACROLOP_PRIVATE_EVAL_REC_15748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15749(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15749_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15749_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15749_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15749_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15750
#define MACROLOP_PRIVATE_EVAL_REC_15749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15750(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15750_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15750_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15750_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15750_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15751
#define MACROLOP_PRIVATE_EVAL_REC_15750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15751(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15751_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15751_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15751_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15751_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15752
#define MACROLOP_PRIVATE_EVAL_REC_15751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15752(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15752_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15752_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15752_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15752_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15753
#define MACROLOP_PRIVATE_EVAL_REC_15752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15753(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15753_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15753_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15753_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15753_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15754
#define MACROLOP_PRIVATE_EVAL_REC_15753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15754(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15754_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15754_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15754_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15754_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15755
#define MACROLOP_PRIVATE_EVAL_REC_15754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15755(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15755_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15755_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15755_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15755_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15756
#define MACROLOP_PRIVATE_EVAL_REC_15755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15756(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15756_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15756_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15756_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15756_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15757
#define MACROLOP_PRIVATE_EVAL_REC_15756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15757(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15757_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15757_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15757_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15757_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15758
#define MACROLOP_PRIVATE_EVAL_REC_15757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15758(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15758_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15758_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15758_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15758_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15759
#define MACROLOP_PRIVATE_EVAL_REC_15758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15759(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15759_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15759_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15759_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15759_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15760
#define MACROLOP_PRIVATE_EVAL_REC_15759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15760(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15760_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15760_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15760_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15760_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15761
#define MACROLOP_PRIVATE_EVAL_REC_15760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15761(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15761_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15761_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15761_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15761_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15762
#define MACROLOP_PRIVATE_EVAL_REC_15761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15762(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15762_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15762_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15762_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15762_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15763
#define MACROLOP_PRIVATE_EVAL_REC_15762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15763(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15763_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15763_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15763_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15763_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15764
#define MACROLOP_PRIVATE_EVAL_REC_15763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15764(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15764_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15764_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15764_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15764_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15765
#define MACROLOP_PRIVATE_EVAL_REC_15764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15765(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15765_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15765_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15765_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15765_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15766
#define MACROLOP_PRIVATE_EVAL_REC_15765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15766(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15766_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15766_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15766_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15766_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15767
#define MACROLOP_PRIVATE_EVAL_REC_15766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15767(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15767_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15767_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15767_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15767_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15768
#define MACROLOP_PRIVATE_EVAL_REC_15767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15768(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15768_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15768_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15768_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15768_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15769
#define MACROLOP_PRIVATE_EVAL_REC_15768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15769(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15769_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15769_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15769_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15769_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15770
#define MACROLOP_PRIVATE_EVAL_REC_15769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15770(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15770_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15770_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15770_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15770_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15771
#define MACROLOP_PRIVATE_EVAL_REC_15770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15771(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15771_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15771_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15771_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15771_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15772
#define MACROLOP_PRIVATE_EVAL_REC_15771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15772(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15772_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15772_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15772_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15772_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15773
#define MACROLOP_PRIVATE_EVAL_REC_15772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15773(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15773_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15773_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15773_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15773_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15774
#define MACROLOP_PRIVATE_EVAL_REC_15773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15774(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15774_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15774_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15774_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15774_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15775
#define MACROLOP_PRIVATE_EVAL_REC_15774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15775(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15775_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15775_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15775_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15775_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15776
#define MACROLOP_PRIVATE_EVAL_REC_15775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15776(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15776_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15776_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15776_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15776_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15777
#define MACROLOP_PRIVATE_EVAL_REC_15776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15777(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15777_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15777_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15777_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15777_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15778
#define MACROLOP_PRIVATE_EVAL_REC_15777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15778(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15778_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15778_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15778_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15778_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15779
#define MACROLOP_PRIVATE_EVAL_REC_15778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15779(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15779_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15779_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15779_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15779_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15780
#define MACROLOP_PRIVATE_EVAL_REC_15779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15780(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15780_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15780_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15780_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15780_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15781
#define MACROLOP_PRIVATE_EVAL_REC_15780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15781(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15781_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15781_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15781_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15781_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15782
#define MACROLOP_PRIVATE_EVAL_REC_15781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15782(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15782_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15782_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15782_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15782_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15783
#define MACROLOP_PRIVATE_EVAL_REC_15782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15783(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15783_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15783_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15783_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15783_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15784
#define MACROLOP_PRIVATE_EVAL_REC_15783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15784(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15784_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15784_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15784_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15784_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15785
#define MACROLOP_PRIVATE_EVAL_REC_15784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15785(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15785_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15785_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15785_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15785_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15786
#define MACROLOP_PRIVATE_EVAL_REC_15785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15786(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15786_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15786_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15786_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15786_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15787
#define MACROLOP_PRIVATE_EVAL_REC_15786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15787(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15787_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15787_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15787_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15787_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15788
#define MACROLOP_PRIVATE_EVAL_REC_15787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15788(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15788_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15788_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15788_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15788_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15789
#define MACROLOP_PRIVATE_EVAL_REC_15788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15789(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15789_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15789_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15789_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15789_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15790
#define MACROLOP_PRIVATE_EVAL_REC_15789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15790(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15790_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15790_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15790_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15790_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15791
#define MACROLOP_PRIVATE_EVAL_REC_15790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15791(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15791_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15791_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15791_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15791_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15792
#define MACROLOP_PRIVATE_EVAL_REC_15791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15792(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15792_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15792_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15792_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15792_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15793
#define MACROLOP_PRIVATE_EVAL_REC_15792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15793(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15793_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15793_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15793_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15793_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15794
#define MACROLOP_PRIVATE_EVAL_REC_15793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15794(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15794_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15794_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15794_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15794_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15795
#define MACROLOP_PRIVATE_EVAL_REC_15794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15795(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15795_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15795_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15795_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15795_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15796
#define MACROLOP_PRIVATE_EVAL_REC_15795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15796(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15796_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15796_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15796_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15796_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15797
#define MACROLOP_PRIVATE_EVAL_REC_15796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15797(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15797_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15797_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15797_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15797_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15798
#define MACROLOP_PRIVATE_EVAL_REC_15797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15798(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15798_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15798_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15798_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15798_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15799
#define MACROLOP_PRIVATE_EVAL_REC_15798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15799(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15799_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15799_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15799_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15799_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15800
#define MACROLOP_PRIVATE_EVAL_REC_15799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15800(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15800_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15800_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15800_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15800_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15801
#define MACROLOP_PRIVATE_EVAL_REC_15800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15801(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15801_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15801_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15801_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15801_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15802
#define MACROLOP_PRIVATE_EVAL_REC_15801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15802(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15802_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15802_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15802_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15802_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15803
#define MACROLOP_PRIVATE_EVAL_REC_15802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15803(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15803_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15803_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15803_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15803_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15804
#define MACROLOP_PRIVATE_EVAL_REC_15803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15804(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15804_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15804_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15804_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15804_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15805
#define MACROLOP_PRIVATE_EVAL_REC_15804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15805(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15805_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15805_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15805_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15805_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15806
#define MACROLOP_PRIVATE_EVAL_REC_15805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15806(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15806_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15806_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15806_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15806_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15807
#define MACROLOP_PRIVATE_EVAL_REC_15806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15807(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15807_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15807_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15807_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15807_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15808
#define MACROLOP_PRIVATE_EVAL_REC_15807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15808(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15808_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15808_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15808_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15808_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15809
#define MACROLOP_PRIVATE_EVAL_REC_15808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15809(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15809_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15809_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15809_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15809_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15810
#define MACROLOP_PRIVATE_EVAL_REC_15809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15810(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15810_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15810_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15810_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15810_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15811
#define MACROLOP_PRIVATE_EVAL_REC_15810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15811(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15811_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15811_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15811_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15811_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15812
#define MACROLOP_PRIVATE_EVAL_REC_15811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15812(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15812_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15812_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15812_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15812_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15813
#define MACROLOP_PRIVATE_EVAL_REC_15812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15813(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15813_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15813_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15813_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15813_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15814
#define MACROLOP_PRIVATE_EVAL_REC_15813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15814(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15814_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15814_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15814_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15814_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15815
#define MACROLOP_PRIVATE_EVAL_REC_15814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15815(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15815_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15815_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15815_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15815_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15816
#define MACROLOP_PRIVATE_EVAL_REC_15815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15816(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15816_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15816_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15816_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15816_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15817
#define MACROLOP_PRIVATE_EVAL_REC_15816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15817(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15817_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15817_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15817_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15817_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15818
#define MACROLOP_PRIVATE_EVAL_REC_15817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15818(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15818_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15818_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15818_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15818_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15819
#define MACROLOP_PRIVATE_EVAL_REC_15818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15819(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15819_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15819_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15819_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15819_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15820
#define MACROLOP_PRIVATE_EVAL_REC_15819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15820(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15820_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15820_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15820_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15820_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15821
#define MACROLOP_PRIVATE_EVAL_REC_15820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15821(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15821_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15821_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15821_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15821_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15822
#define MACROLOP_PRIVATE_EVAL_REC_15821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15822(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15822_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15822_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15822_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15822_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15823
#define MACROLOP_PRIVATE_EVAL_REC_15822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15823(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15823_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15823_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15823_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15823_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15824
#define MACROLOP_PRIVATE_EVAL_REC_15823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15824(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15824_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15824_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15824_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15824_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15825
#define MACROLOP_PRIVATE_EVAL_REC_15824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15825(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15825_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15825_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15825_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15825_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15826
#define MACROLOP_PRIVATE_EVAL_REC_15825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15826(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15826_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15826_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15826_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15826_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15827
#define MACROLOP_PRIVATE_EVAL_REC_15826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15827(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15827_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15827_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15827_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15827_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15828
#define MACROLOP_PRIVATE_EVAL_REC_15827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15828(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15828_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15828_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15828_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15828_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15829
#define MACROLOP_PRIVATE_EVAL_REC_15828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15829(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15829_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15829_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15829_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15829_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15830
#define MACROLOP_PRIVATE_EVAL_REC_15829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15830(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15830_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15830_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15830_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15830_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15831
#define MACROLOP_PRIVATE_EVAL_REC_15830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15831(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15831_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15831_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15831_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15831_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15832
#define MACROLOP_PRIVATE_EVAL_REC_15831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15832(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15832_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15832_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15832_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15832_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15833
#define MACROLOP_PRIVATE_EVAL_REC_15832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15833(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15833_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15833_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15833_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15833_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15834
#define MACROLOP_PRIVATE_EVAL_REC_15833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15834(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15834_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15834_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15834_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15834_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15835
#define MACROLOP_PRIVATE_EVAL_REC_15834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15835(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15835_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15835_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15835_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15835_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15836
#define MACROLOP_PRIVATE_EVAL_REC_15835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15836(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15836_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15836_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15836_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15836_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15837
#define MACROLOP_PRIVATE_EVAL_REC_15836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15837(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15837_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15837_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15837_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15837_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15838
#define MACROLOP_PRIVATE_EVAL_REC_15837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15838(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15838_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15838_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15838_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15838_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15839
#define MACROLOP_PRIVATE_EVAL_REC_15838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15839(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15839_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15839_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15839_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15839_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15840
#define MACROLOP_PRIVATE_EVAL_REC_15839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15840(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15840_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15840_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15840_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15840_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15841
#define MACROLOP_PRIVATE_EVAL_REC_15840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15841(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15841_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15841_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15841_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15841_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15842
#define MACROLOP_PRIVATE_EVAL_REC_15841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15842(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15842_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15842_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15842_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15842_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15843
#define MACROLOP_PRIVATE_EVAL_REC_15842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15843(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15843_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15843_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15843_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15843_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15844
#define MACROLOP_PRIVATE_EVAL_REC_15843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15844(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15844_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15844_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15844_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15844_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15845
#define MACROLOP_PRIVATE_EVAL_REC_15844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15845(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15845_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15845_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15845_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15845_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15846
#define MACROLOP_PRIVATE_EVAL_REC_15845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15846(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15846_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15846_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15846_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15846_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15847
#define MACROLOP_PRIVATE_EVAL_REC_15846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15847(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15847_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15847_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15847_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15847_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15848
#define MACROLOP_PRIVATE_EVAL_REC_15847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15848(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15848_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15848_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15848_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15848_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15849
#define MACROLOP_PRIVATE_EVAL_REC_15848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15849(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15849_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15849_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15849_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15849_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15850
#define MACROLOP_PRIVATE_EVAL_REC_15849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15850(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15850_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15850_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15850_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15850_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15851
#define MACROLOP_PRIVATE_EVAL_REC_15850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15851(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15851_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15851_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15851_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15851_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15852
#define MACROLOP_PRIVATE_EVAL_REC_15851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15852(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15852_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15852_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15852_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15852_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15853
#define MACROLOP_PRIVATE_EVAL_REC_15852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15853(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15853_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15853_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15853_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15853_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15854
#define MACROLOP_PRIVATE_EVAL_REC_15853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15854(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15854_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15854_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15854_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15854_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15855
#define MACROLOP_PRIVATE_EVAL_REC_15854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15855(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15855_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15855_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15855_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15855_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15856
#define MACROLOP_PRIVATE_EVAL_REC_15855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15856(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15856_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15856_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15856_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15856_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15857
#define MACROLOP_PRIVATE_EVAL_REC_15856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15857(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15857_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15857_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15857_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15857_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15858
#define MACROLOP_PRIVATE_EVAL_REC_15857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15858(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15858_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15858_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15858_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15858_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15859
#define MACROLOP_PRIVATE_EVAL_REC_15858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15859(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15859_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15859_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15859_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15859_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15860
#define MACROLOP_PRIVATE_EVAL_REC_15859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15860(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15860_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15860_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15860_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15860_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15861
#define MACROLOP_PRIVATE_EVAL_REC_15860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15861(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15861_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15861_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15861_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15861_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15862
#define MACROLOP_PRIVATE_EVAL_REC_15861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15862(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15862_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15862_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15862_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15862_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15863
#define MACROLOP_PRIVATE_EVAL_REC_15862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15863(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15863_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15863_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15863_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15863_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15864
#define MACROLOP_PRIVATE_EVAL_REC_15863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15864(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15864_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15864_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15864_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15864_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15865
#define MACROLOP_PRIVATE_EVAL_REC_15864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15865(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15865_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15865_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15865_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15865_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15866
#define MACROLOP_PRIVATE_EVAL_REC_15865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15866(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15866_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15866_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15866_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15866_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15867
#define MACROLOP_PRIVATE_EVAL_REC_15866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15867(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15867_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15867_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15867_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15867_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15868
#define MACROLOP_PRIVATE_EVAL_REC_15867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15868(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15868_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15868_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15868_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15868_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15869
#define MACROLOP_PRIVATE_EVAL_REC_15868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15869(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15869_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15869_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15869_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15869_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15870
#define MACROLOP_PRIVATE_EVAL_REC_15869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15870(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15870_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15870_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15870_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15870_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15871
#define MACROLOP_PRIVATE_EVAL_REC_15870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15871(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15871_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15871_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15871_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15871_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15872
#define MACROLOP_PRIVATE_EVAL_REC_15871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15872(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15872_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15872_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15872_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15872_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15873
#define MACROLOP_PRIVATE_EVAL_REC_15872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15873(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15873_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15873_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15873_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15873_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15874
#define MACROLOP_PRIVATE_EVAL_REC_15873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15874(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15874_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15874_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15874_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15874_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15875
#define MACROLOP_PRIVATE_EVAL_REC_15874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15875(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15875_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15875_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15875_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15875_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15876
#define MACROLOP_PRIVATE_EVAL_REC_15875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15876(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15876_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15876_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15876_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15876_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15877
#define MACROLOP_PRIVATE_EVAL_REC_15876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15877(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15877_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15877_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15877_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15877_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15878
#define MACROLOP_PRIVATE_EVAL_REC_15877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15878(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15878_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15878_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15878_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15878_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15879
#define MACROLOP_PRIVATE_EVAL_REC_15878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15879(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15879_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15879_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15879_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15879_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15880
#define MACROLOP_PRIVATE_EVAL_REC_15879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15880(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15880_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15880_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15880_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15880_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15881
#define MACROLOP_PRIVATE_EVAL_REC_15880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15881(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15881_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15881_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15881_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15881_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15882
#define MACROLOP_PRIVATE_EVAL_REC_15881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15882(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15882_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15882_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15882_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15882_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15883
#define MACROLOP_PRIVATE_EVAL_REC_15882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15883(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15883_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15883_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15883_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15883_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15884
#define MACROLOP_PRIVATE_EVAL_REC_15883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15884(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15884_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15884_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15884_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15884_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15885
#define MACROLOP_PRIVATE_EVAL_REC_15884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15885(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15885_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15885_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15885_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15885_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15886
#define MACROLOP_PRIVATE_EVAL_REC_15885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15886(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15886_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15886_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15886_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15886_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15887
#define MACROLOP_PRIVATE_EVAL_REC_15886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15887(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15887_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15887_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15887_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15887_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15888
#define MACROLOP_PRIVATE_EVAL_REC_15887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15888(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15888_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15888_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15888_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15888_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15889
#define MACROLOP_PRIVATE_EVAL_REC_15888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15889(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15889_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15889_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15889_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15889_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15890
#define MACROLOP_PRIVATE_EVAL_REC_15889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15890(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15890_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15890_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15890_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15890_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15891
#define MACROLOP_PRIVATE_EVAL_REC_15890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15891(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15891_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15891_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15891_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15891_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15892
#define MACROLOP_PRIVATE_EVAL_REC_15891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15892(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15892_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15892_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15892_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15892_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15893
#define MACROLOP_PRIVATE_EVAL_REC_15892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15893(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15893_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15893_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15893_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15893_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15894
#define MACROLOP_PRIVATE_EVAL_REC_15893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15894(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15894_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15894_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15894_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15894_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15895
#define MACROLOP_PRIVATE_EVAL_REC_15894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15895(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15895_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15895_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15895_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15895_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15896
#define MACROLOP_PRIVATE_EVAL_REC_15895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15896(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15896_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15896_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15896_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15896_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15897
#define MACROLOP_PRIVATE_EVAL_REC_15896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15897(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15897_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15897_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15897_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15897_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15898
#define MACROLOP_PRIVATE_EVAL_REC_15897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15898(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15898_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15898_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15898_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15898_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15899
#define MACROLOP_PRIVATE_EVAL_REC_15898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15899(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15899_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15899_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15899_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15899_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15900
#define MACROLOP_PRIVATE_EVAL_REC_15899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15900(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15900_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15900_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15900_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15900_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15901
#define MACROLOP_PRIVATE_EVAL_REC_15900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15901(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15901_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15901_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15901_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15901_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15902
#define MACROLOP_PRIVATE_EVAL_REC_15901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15902(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15902_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15902_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15902_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15902_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15903
#define MACROLOP_PRIVATE_EVAL_REC_15902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15903(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15903_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15903_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15903_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15903_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15904
#define MACROLOP_PRIVATE_EVAL_REC_15903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15904(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15904_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15904_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15904_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15904_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15905
#define MACROLOP_PRIVATE_EVAL_REC_15904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15905(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15905_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15905_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15905_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15905_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15906
#define MACROLOP_PRIVATE_EVAL_REC_15905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15906(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15906_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15906_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15906_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15906_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15907
#define MACROLOP_PRIVATE_EVAL_REC_15906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15907(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15907_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15907_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15907_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15907_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15908
#define MACROLOP_PRIVATE_EVAL_REC_15907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15908(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15908_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15908_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15908_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15908_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15909
#define MACROLOP_PRIVATE_EVAL_REC_15908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15909(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15909_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15909_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15909_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15909_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15910
#define MACROLOP_PRIVATE_EVAL_REC_15909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15910(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15910_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15910_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15910_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15910_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15911
#define MACROLOP_PRIVATE_EVAL_REC_15910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15911(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15911_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15911_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15911_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15911_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15912
#define MACROLOP_PRIVATE_EVAL_REC_15911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15912(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15912_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15912_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15912_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15912_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15913
#define MACROLOP_PRIVATE_EVAL_REC_15912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15913(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15913_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15913_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15913_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15913_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15914
#define MACROLOP_PRIVATE_EVAL_REC_15913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15914(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15914_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15914_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15914_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15914_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15915
#define MACROLOP_PRIVATE_EVAL_REC_15914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15915(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15915_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15915_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15915_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15915_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15916
#define MACROLOP_PRIVATE_EVAL_REC_15915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15916(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15916_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15916_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15916_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15916_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15917
#define MACROLOP_PRIVATE_EVAL_REC_15916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15917(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15917_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15917_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15917_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15917_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15918
#define MACROLOP_PRIVATE_EVAL_REC_15917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15918(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15918_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15918_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15918_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15918_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15919
#define MACROLOP_PRIVATE_EVAL_REC_15918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15919(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15919_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15919_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15919_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15919_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15920
#define MACROLOP_PRIVATE_EVAL_REC_15919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15920(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15920_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15920_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15920_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15920_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15921
#define MACROLOP_PRIVATE_EVAL_REC_15920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15921(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15921_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15921_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15921_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15921_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15922
#define MACROLOP_PRIVATE_EVAL_REC_15921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15922(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15922_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15922_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15922_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15922_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15923
#define MACROLOP_PRIVATE_EVAL_REC_15922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15923(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15923_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15923_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15923_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15923_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15924
#define MACROLOP_PRIVATE_EVAL_REC_15923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15924(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15924_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15924_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15924_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15924_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15925
#define MACROLOP_PRIVATE_EVAL_REC_15924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15925(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15925_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15925_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15925_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15925_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15926
#define MACROLOP_PRIVATE_EVAL_REC_15925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15926(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15926_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15926_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15926_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15926_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15927
#define MACROLOP_PRIVATE_EVAL_REC_15926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15927(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15927_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15927_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15927_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15927_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15928
#define MACROLOP_PRIVATE_EVAL_REC_15927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15928(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15928_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15928_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15928_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15928_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15929
#define MACROLOP_PRIVATE_EVAL_REC_15928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15929(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15929_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15929_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15929_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15929_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15930
#define MACROLOP_PRIVATE_EVAL_REC_15929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15930(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15930_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15930_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15930_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15930_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15931
#define MACROLOP_PRIVATE_EVAL_REC_15930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15931(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15931_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15931_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15931_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15931_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15932
#define MACROLOP_PRIVATE_EVAL_REC_15931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15932(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15932_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15932_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15932_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15932_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15933
#define MACROLOP_PRIVATE_EVAL_REC_15932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15933(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15933_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15933_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15933_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15933_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15934
#define MACROLOP_PRIVATE_EVAL_REC_15933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15934(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15934_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15934_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15934_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15934_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15935
#define MACROLOP_PRIVATE_EVAL_REC_15934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15935(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15935_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15935_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15935_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15935_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15936
#define MACROLOP_PRIVATE_EVAL_REC_15935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15936(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15936_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15936_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15936_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15936_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15937
#define MACROLOP_PRIVATE_EVAL_REC_15936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15937(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15937_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15937_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15937_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15937_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15938
#define MACROLOP_PRIVATE_EVAL_REC_15937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15938(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15938_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15938_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15938_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15938_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15939
#define MACROLOP_PRIVATE_EVAL_REC_15938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15939(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15939_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15939_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15939_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15939_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15940
#define MACROLOP_PRIVATE_EVAL_REC_15939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15940(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15940_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15940_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15940_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15940_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15941
#define MACROLOP_PRIVATE_EVAL_REC_15940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15941(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15941_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15941_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15941_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15941_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15942
#define MACROLOP_PRIVATE_EVAL_REC_15941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15942(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15942_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15942_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15942_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15942_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15943
#define MACROLOP_PRIVATE_EVAL_REC_15942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15943(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15943_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15943_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15943_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15943_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15944
#define MACROLOP_PRIVATE_EVAL_REC_15943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15944(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15944_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15944_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15944_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15944_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15945
#define MACROLOP_PRIVATE_EVAL_REC_15944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15945(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15945_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15945_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15945_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15945_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15946
#define MACROLOP_PRIVATE_EVAL_REC_15945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15946(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15946_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15946_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15946_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15946_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15947
#define MACROLOP_PRIVATE_EVAL_REC_15946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15947(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15947_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15947_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15947_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15947_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15948
#define MACROLOP_PRIVATE_EVAL_REC_15947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15948(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15948_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15948_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15948_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15948_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15949
#define MACROLOP_PRIVATE_EVAL_REC_15948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15949(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15949_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15949_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15949_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15949_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15950
#define MACROLOP_PRIVATE_EVAL_REC_15949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15950(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15950_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15950_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15950_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15950_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15951
#define MACROLOP_PRIVATE_EVAL_REC_15950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15951(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15951_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15951_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15951_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15951_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15952
#define MACROLOP_PRIVATE_EVAL_REC_15951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15952(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15952_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15952_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15952_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15952_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15953
#define MACROLOP_PRIVATE_EVAL_REC_15952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15953(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15953_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15953_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15953_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15953_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15954
#define MACROLOP_PRIVATE_EVAL_REC_15953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15954(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15954_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15954_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15954_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15954_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15955
#define MACROLOP_PRIVATE_EVAL_REC_15954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15955(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15955_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15955_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15955_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15955_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15956
#define MACROLOP_PRIVATE_EVAL_REC_15955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15956(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15956_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15956_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15956_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15956_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15957
#define MACROLOP_PRIVATE_EVAL_REC_15956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15957(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15957_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15957_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15957_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15957_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15958
#define MACROLOP_PRIVATE_EVAL_REC_15957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15958(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15958_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15958_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15958_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15958_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15959
#define MACROLOP_PRIVATE_EVAL_REC_15958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15959(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15959_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15959_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15959_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15959_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15960
#define MACROLOP_PRIVATE_EVAL_REC_15959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15960(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15960_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15960_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15960_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15960_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15961
#define MACROLOP_PRIVATE_EVAL_REC_15960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15961(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15961_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15961_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15961_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15961_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15962
#define MACROLOP_PRIVATE_EVAL_REC_15961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15962(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15962_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15962_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15962_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15962_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15963
#define MACROLOP_PRIVATE_EVAL_REC_15962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15963(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15963_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15963_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15963_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15963_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15964
#define MACROLOP_PRIVATE_EVAL_REC_15963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15964(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15964_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15964_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15964_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15964_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15965
#define MACROLOP_PRIVATE_EVAL_REC_15964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15965(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15965_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15965_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15965_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15965_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15966
#define MACROLOP_PRIVATE_EVAL_REC_15965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15966(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15966_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15966_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15966_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15966_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15967
#define MACROLOP_PRIVATE_EVAL_REC_15966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15967(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15967_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15967_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15967_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15967_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15968
#define MACROLOP_PRIVATE_EVAL_REC_15967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15968(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15968_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15968_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15968_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15968_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15969
#define MACROLOP_PRIVATE_EVAL_REC_15968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15969(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15969_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15969_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15969_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15969_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15970
#define MACROLOP_PRIVATE_EVAL_REC_15969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15970(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15970_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15970_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15970_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15970_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15971
#define MACROLOP_PRIVATE_EVAL_REC_15970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15971(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15971_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15971_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15971_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15971_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15972
#define MACROLOP_PRIVATE_EVAL_REC_15971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15972(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15972_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15972_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15972_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15972_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15973
#define MACROLOP_PRIVATE_EVAL_REC_15972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15973(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15973_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15973_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15973_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15973_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15974
#define MACROLOP_PRIVATE_EVAL_REC_15973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15974(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15974_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15974_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15974_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15974_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15975
#define MACROLOP_PRIVATE_EVAL_REC_15974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15975(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15975_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15975_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15975_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15975_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15976
#define MACROLOP_PRIVATE_EVAL_REC_15975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15976(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15976_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15976_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15976_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15976_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15977
#define MACROLOP_PRIVATE_EVAL_REC_15976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15977(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15977_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15977_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15977_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15977_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15978
#define MACROLOP_PRIVATE_EVAL_REC_15977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15978(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15978_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15978_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15978_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15978_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15979
#define MACROLOP_PRIVATE_EVAL_REC_15978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15979(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15979_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15979_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15979_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15979_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15980
#define MACROLOP_PRIVATE_EVAL_REC_15979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15980(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15980_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15980_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15980_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15980_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15981
#define MACROLOP_PRIVATE_EVAL_REC_15980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15981(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15981_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15981_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15981_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15981_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15982
#define MACROLOP_PRIVATE_EVAL_REC_15981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15982(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15982_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15982_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15982_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15982_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15983
#define MACROLOP_PRIVATE_EVAL_REC_15982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15983(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15983_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15983_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15983_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15983_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15984
#define MACROLOP_PRIVATE_EVAL_REC_15983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15984(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15984_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15984_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15984_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15984_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15985
#define MACROLOP_PRIVATE_EVAL_REC_15984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15985(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15985_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15985_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15985_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15985_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15986
#define MACROLOP_PRIVATE_EVAL_REC_15985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15986(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15986_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15986_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15986_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15986_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15987
#define MACROLOP_PRIVATE_EVAL_REC_15986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15987(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15987_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15987_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15987_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15987_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15988
#define MACROLOP_PRIVATE_EVAL_REC_15987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15988(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15988_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15988_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15988_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15988_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15989
#define MACROLOP_PRIVATE_EVAL_REC_15988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15989(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15989_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15989_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15989_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15989_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15990
#define MACROLOP_PRIVATE_EVAL_REC_15989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15990(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15990_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15990_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15990_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15990_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15991
#define MACROLOP_PRIVATE_EVAL_REC_15990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15991(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15991_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15991_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15991_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15991_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15992
#define MACROLOP_PRIVATE_EVAL_REC_15991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15992(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15992_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15992_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15992_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15992_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15993
#define MACROLOP_PRIVATE_EVAL_REC_15992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15993(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15993_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15993_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15993_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15993_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15994
#define MACROLOP_PRIVATE_EVAL_REC_15993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15994(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15994_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15994_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15994_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15994_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15995
#define MACROLOP_PRIVATE_EVAL_REC_15994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15995(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15995_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15995_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15995_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15995_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15996
#define MACROLOP_PRIVATE_EVAL_REC_15995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15996(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15996_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15996_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15996_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15996_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15997
#define MACROLOP_PRIVATE_EVAL_REC_15996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15997(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15997_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15997_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15997_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15997_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15998
#define MACROLOP_PRIVATE_EVAL_REC_15997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15998(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15998_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15998_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15998_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15998_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_15999
#define MACROLOP_PRIVATE_EVAL_REC_15998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_15999(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_15999_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_15999_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_15999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_15999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_15999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_15999_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_15999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_15999_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_15999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_15999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16000
#define MACROLOP_PRIVATE_EVAL_REC_15999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16000(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16000_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16000_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16000_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16000_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16001
#define MACROLOP_PRIVATE_EVAL_REC_16000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16001(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16001_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16001_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16001_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16001_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16002
#define MACROLOP_PRIVATE_EVAL_REC_16001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16002(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16002_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16002_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16002_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16002_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16003
#define MACROLOP_PRIVATE_EVAL_REC_16002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16003(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16003_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16003_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16003_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16003_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16004
#define MACROLOP_PRIVATE_EVAL_REC_16003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16004(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16004_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16004_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16004_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16004_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16005
#define MACROLOP_PRIVATE_EVAL_REC_16004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16005(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16005_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16005_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16005_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16005_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16006
#define MACROLOP_PRIVATE_EVAL_REC_16005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16006(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16006_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16006_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16006_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16006_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16007
#define MACROLOP_PRIVATE_EVAL_REC_16006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16007(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16007_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16007_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16007_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16007_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16008
#define MACROLOP_PRIVATE_EVAL_REC_16007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16008(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16008_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16008_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16008_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16008_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16009
#define MACROLOP_PRIVATE_EVAL_REC_16008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16009(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16009_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16009_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16009_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16009_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16010
#define MACROLOP_PRIVATE_EVAL_REC_16009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16010(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16010_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16010_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16010_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16010_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16011
#define MACROLOP_PRIVATE_EVAL_REC_16010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16011(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16011_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16011_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16011_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16011_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16012
#define MACROLOP_PRIVATE_EVAL_REC_16011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16012(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16012_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16012_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16012_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16012_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16013
#define MACROLOP_PRIVATE_EVAL_REC_16012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16013(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16013_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16013_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16013_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16013_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16014
#define MACROLOP_PRIVATE_EVAL_REC_16013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16014(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16014_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16014_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16014_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16014_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16015
#define MACROLOP_PRIVATE_EVAL_REC_16014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16015(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16015_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16015_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16015_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16015_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16016
#define MACROLOP_PRIVATE_EVAL_REC_16015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16016(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16016_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16016_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16016_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16016_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16017
#define MACROLOP_PRIVATE_EVAL_REC_16016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16017(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16017_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16017_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16017_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16017_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16018
#define MACROLOP_PRIVATE_EVAL_REC_16017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16018(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16018_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16018_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16018_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16018_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16019
#define MACROLOP_PRIVATE_EVAL_REC_16018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16019(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16019_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16019_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16019_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16019_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16020
#define MACROLOP_PRIVATE_EVAL_REC_16019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16020(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16020_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16020_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16020_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16020_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16021
#define MACROLOP_PRIVATE_EVAL_REC_16020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16021(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16021_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16021_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16021_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16021_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16022
#define MACROLOP_PRIVATE_EVAL_REC_16021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16022(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16022_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16022_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16022_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16022_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16023
#define MACROLOP_PRIVATE_EVAL_REC_16022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16023(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16023_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16023_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16023_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16023_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16024
#define MACROLOP_PRIVATE_EVAL_REC_16023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16024(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16024_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16024_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16024_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16024_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16025
#define MACROLOP_PRIVATE_EVAL_REC_16024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16025(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16025_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16025_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16025_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16025_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16026
#define MACROLOP_PRIVATE_EVAL_REC_16025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16026(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16026_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16026_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16026_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16026_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16027
#define MACROLOP_PRIVATE_EVAL_REC_16026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16027(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16027_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16027_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16027_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16027_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16028
#define MACROLOP_PRIVATE_EVAL_REC_16027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16028(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16028_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16028_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16028_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16028_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16029
#define MACROLOP_PRIVATE_EVAL_REC_16028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16029(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16029_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16029_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16029_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16029_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16030
#define MACROLOP_PRIVATE_EVAL_REC_16029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16030(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16030_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16030_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16030_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16030_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16031
#define MACROLOP_PRIVATE_EVAL_REC_16030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16031(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16031_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16031_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16031_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16031_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16032
#define MACROLOP_PRIVATE_EVAL_REC_16031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16032(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16032_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16032_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16032_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16032_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16033
#define MACROLOP_PRIVATE_EVAL_REC_16032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16033(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16033_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16033_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16033_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16033_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16034
#define MACROLOP_PRIVATE_EVAL_REC_16033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16034(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16034_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16034_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16034_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16034_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16035
#define MACROLOP_PRIVATE_EVAL_REC_16034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16035(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16035_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16035_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16035_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16035_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16036
#define MACROLOP_PRIVATE_EVAL_REC_16035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16036(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16036_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16036_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16036_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16036_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16037
#define MACROLOP_PRIVATE_EVAL_REC_16036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16037(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16037_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16037_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16037_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16037_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16038
#define MACROLOP_PRIVATE_EVAL_REC_16037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16038(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16038_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16038_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16038_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16038_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16039
#define MACROLOP_PRIVATE_EVAL_REC_16038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16039(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16039_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16039_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16039_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16039_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16040
#define MACROLOP_PRIVATE_EVAL_REC_16039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16040(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16040_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16040_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16040_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16040_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16041
#define MACROLOP_PRIVATE_EVAL_REC_16040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16041(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16041_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16041_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16041_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16041_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16042
#define MACROLOP_PRIVATE_EVAL_REC_16041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16042(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16042_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16042_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16042_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16042_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16043
#define MACROLOP_PRIVATE_EVAL_REC_16042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16043(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16043_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16043_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16043_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16043_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16044
#define MACROLOP_PRIVATE_EVAL_REC_16043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16044(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16044_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16044_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16044_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16044_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16045
#define MACROLOP_PRIVATE_EVAL_REC_16044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16045(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16045_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16045_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16045_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16045_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16046
#define MACROLOP_PRIVATE_EVAL_REC_16045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16046(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16046_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16046_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16046_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16046_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16047
#define MACROLOP_PRIVATE_EVAL_REC_16046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16047(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16047_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16047_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16047_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16047_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16048
#define MACROLOP_PRIVATE_EVAL_REC_16047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16048(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16048_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16048_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16048_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16048_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16049
#define MACROLOP_PRIVATE_EVAL_REC_16048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16049(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16049_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16049_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16049_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16049_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16050
#define MACROLOP_PRIVATE_EVAL_REC_16049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16050(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16050_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16050_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16050_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16050_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16051
#define MACROLOP_PRIVATE_EVAL_REC_16050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16051(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16051_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16051_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16051_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16051_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16052
#define MACROLOP_PRIVATE_EVAL_REC_16051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16052(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16052_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16052_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16052_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16052_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16053
#define MACROLOP_PRIVATE_EVAL_REC_16052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16053(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16053_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16053_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16053_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16053_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16054
#define MACROLOP_PRIVATE_EVAL_REC_16053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16054(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16054_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16054_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16054_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16054_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16055
#define MACROLOP_PRIVATE_EVAL_REC_16054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16055(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16055_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16055_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16055_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16055_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16056
#define MACROLOP_PRIVATE_EVAL_REC_16055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16056(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16056_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16056_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16056_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16056_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16057
#define MACROLOP_PRIVATE_EVAL_REC_16056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16057(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16057_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16057_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16057_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16057_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16058
#define MACROLOP_PRIVATE_EVAL_REC_16057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16058(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16058_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16058_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16058_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16058_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16059
#define MACROLOP_PRIVATE_EVAL_REC_16058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16059(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16059_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16059_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16059_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16059_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16060
#define MACROLOP_PRIVATE_EVAL_REC_16059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16060(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16060_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16060_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16060_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16060_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16061
#define MACROLOP_PRIVATE_EVAL_REC_16060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16061(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16061_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16061_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16061_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16061_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16062
#define MACROLOP_PRIVATE_EVAL_REC_16061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16062(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16062_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16062_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16062_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16062_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16063
#define MACROLOP_PRIVATE_EVAL_REC_16062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16063(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16063_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16063_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16063_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16063_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16064
#define MACROLOP_PRIVATE_EVAL_REC_16063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16064(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16064_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16064_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16064_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16064_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16065
#define MACROLOP_PRIVATE_EVAL_REC_16064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16065(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16065_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16065_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16065_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16065_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16066
#define MACROLOP_PRIVATE_EVAL_REC_16065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16066(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16066_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16066_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16066_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16066_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16067
#define MACROLOP_PRIVATE_EVAL_REC_16066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16067(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16067_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16067_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16067_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16067_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16068
#define MACROLOP_PRIVATE_EVAL_REC_16067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16068(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16068_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16068_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16068_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16068_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16069
#define MACROLOP_PRIVATE_EVAL_REC_16068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16069(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16069_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16069_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16069_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16069_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16070
#define MACROLOP_PRIVATE_EVAL_REC_16069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16070(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16070_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16070_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16070_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16070_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16071
#define MACROLOP_PRIVATE_EVAL_REC_16070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16071(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16071_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16071_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16071_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16071_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16072
#define MACROLOP_PRIVATE_EVAL_REC_16071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16072(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16072_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16072_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16072_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16072_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16073
#define MACROLOP_PRIVATE_EVAL_REC_16072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16073(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16073_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16073_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16073_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16073_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16074
#define MACROLOP_PRIVATE_EVAL_REC_16073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16074(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16074_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16074_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16074_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16074_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16075
#define MACROLOP_PRIVATE_EVAL_REC_16074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16075(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16075_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16075_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16075_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16075_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16076
#define MACROLOP_PRIVATE_EVAL_REC_16075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16076(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16076_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16076_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16076_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16076_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16077
#define MACROLOP_PRIVATE_EVAL_REC_16076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16077(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16077_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16077_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16077_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16077_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16078
#define MACROLOP_PRIVATE_EVAL_REC_16077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16078(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16078_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16078_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16078_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16078_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16079
#define MACROLOP_PRIVATE_EVAL_REC_16078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16079(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16079_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16079_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16079_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16079_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16080
#define MACROLOP_PRIVATE_EVAL_REC_16079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16080(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16080_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16080_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16080_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16080_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16081
#define MACROLOP_PRIVATE_EVAL_REC_16080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16081(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16081_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16081_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16081_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16081_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16082
#define MACROLOP_PRIVATE_EVAL_REC_16081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16082(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16082_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16082_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16082_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16082_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16083
#define MACROLOP_PRIVATE_EVAL_REC_16082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16083(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16083_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16083_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16083_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16083_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16084
#define MACROLOP_PRIVATE_EVAL_REC_16083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16084(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16084_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16084_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16084_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16084_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16085
#define MACROLOP_PRIVATE_EVAL_REC_16084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16085(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16085_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16085_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16085_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16085_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16086
#define MACROLOP_PRIVATE_EVAL_REC_16085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16086(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16086_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16086_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16086_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16086_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16087
#define MACROLOP_PRIVATE_EVAL_REC_16086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16087(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16087_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16087_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16087_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16087_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16088
#define MACROLOP_PRIVATE_EVAL_REC_16087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16088(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16088_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16088_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16088_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16088_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16089
#define MACROLOP_PRIVATE_EVAL_REC_16088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16089(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16089_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16089_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16089_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16089_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16090
#define MACROLOP_PRIVATE_EVAL_REC_16089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16090(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16090_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16090_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16090_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16090_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16091
#define MACROLOP_PRIVATE_EVAL_REC_16090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16091(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16091_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16091_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16091_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16091_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16092
#define MACROLOP_PRIVATE_EVAL_REC_16091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16092(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16092_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16092_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16092_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16092_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16093
#define MACROLOP_PRIVATE_EVAL_REC_16092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16093(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16093_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16093_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16093_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16093_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16094
#define MACROLOP_PRIVATE_EVAL_REC_16093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16094(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16094_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16094_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16094_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16094_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16095
#define MACROLOP_PRIVATE_EVAL_REC_16094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16095(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16095_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16095_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16095_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16095_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16096
#define MACROLOP_PRIVATE_EVAL_REC_16095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16096(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16096_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16096_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16096_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16096_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16097
#define MACROLOP_PRIVATE_EVAL_REC_16096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16097(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16097_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16097_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16097_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16097_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16098
#define MACROLOP_PRIVATE_EVAL_REC_16097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16098(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16098_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16098_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16098_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16098_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16099
#define MACROLOP_PRIVATE_EVAL_REC_16098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16099(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16099_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16099_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16099_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16099_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16100
#define MACROLOP_PRIVATE_EVAL_REC_16099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16100(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16100_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16100_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16100_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16100_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16101
#define MACROLOP_PRIVATE_EVAL_REC_16100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16101(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16101_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16101_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16101_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16101_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16102
#define MACROLOP_PRIVATE_EVAL_REC_16101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16102(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16102_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16102_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16102_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16102_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16103
#define MACROLOP_PRIVATE_EVAL_REC_16102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16103(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16103_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16103_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16103_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16103_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16104
#define MACROLOP_PRIVATE_EVAL_REC_16103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16104(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16104_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16104_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16104_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16104_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16105
#define MACROLOP_PRIVATE_EVAL_REC_16104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16105(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16105_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16105_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16105_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16105_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16106
#define MACROLOP_PRIVATE_EVAL_REC_16105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16106(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16106_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16106_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16106_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16106_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16107
#define MACROLOP_PRIVATE_EVAL_REC_16106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16107(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16107_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16107_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16107_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16107_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16108
#define MACROLOP_PRIVATE_EVAL_REC_16107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16108(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16108_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16108_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16108_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16108_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16109
#define MACROLOP_PRIVATE_EVAL_REC_16108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16109(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16109_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16109_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16109_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16109_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16110
#define MACROLOP_PRIVATE_EVAL_REC_16109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16110(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16110_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16110_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16110_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16110_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16111
#define MACROLOP_PRIVATE_EVAL_REC_16110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16111(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16111_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16111_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16111_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16111_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16112
#define MACROLOP_PRIVATE_EVAL_REC_16111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16112(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16112_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16112_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16112_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16112_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16113
#define MACROLOP_PRIVATE_EVAL_REC_16112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16113(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16113_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16113_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16113_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16113_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16114
#define MACROLOP_PRIVATE_EVAL_REC_16113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16114(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16114_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16114_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16114_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16114_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16115
#define MACROLOP_PRIVATE_EVAL_REC_16114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16115(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16115_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16115_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16115_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16115_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16116
#define MACROLOP_PRIVATE_EVAL_REC_16115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16116(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16116_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16116_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16116_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16116_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16117
#define MACROLOP_PRIVATE_EVAL_REC_16116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16117(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16117_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16117_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16117_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16117_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16118
#define MACROLOP_PRIVATE_EVAL_REC_16117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16118(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16118_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16118_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16118_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16118_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16119
#define MACROLOP_PRIVATE_EVAL_REC_16118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16119(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16119_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16119_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16119_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16119_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16120
#define MACROLOP_PRIVATE_EVAL_REC_16119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16120(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16120_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16120_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16120_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16120_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16121
#define MACROLOP_PRIVATE_EVAL_REC_16120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16121(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16121_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16121_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16121_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16121_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16122
#define MACROLOP_PRIVATE_EVAL_REC_16121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16122(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16122_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16122_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16122_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16122_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16123
#define MACROLOP_PRIVATE_EVAL_REC_16122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16123(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16123_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16123_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16123_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16123_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16124
#define MACROLOP_PRIVATE_EVAL_REC_16123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16124(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16124_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16124_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16124_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16124_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16125
#define MACROLOP_PRIVATE_EVAL_REC_16124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16125(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16125_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16125_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16125_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16125_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16126
#define MACROLOP_PRIVATE_EVAL_REC_16125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16126(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16126_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16126_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16126_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16126_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16127
#define MACROLOP_PRIVATE_EVAL_REC_16126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16127(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16127_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16127_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16127_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16127_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16128
#define MACROLOP_PRIVATE_EVAL_REC_16127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16128(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16128_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16128_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16128_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16128_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16129
#define MACROLOP_PRIVATE_EVAL_REC_16128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16129(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16129_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16129_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16129_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16129_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16130
#define MACROLOP_PRIVATE_EVAL_REC_16129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16130(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16130_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16130_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16130_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16130_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16131
#define MACROLOP_PRIVATE_EVAL_REC_16130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16131(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16131_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16131_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16131_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16131_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16132
#define MACROLOP_PRIVATE_EVAL_REC_16131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16132(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16132_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16132_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16132_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16132_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16133
#define MACROLOP_PRIVATE_EVAL_REC_16132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16133(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16133_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16133_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16133_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16133_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16134
#define MACROLOP_PRIVATE_EVAL_REC_16133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16134(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16134_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16134_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16134_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16134_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16135
#define MACROLOP_PRIVATE_EVAL_REC_16134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16135(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16135_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16135_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16135_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16135_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16136
#define MACROLOP_PRIVATE_EVAL_REC_16135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16136(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16136_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16136_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16136_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16136_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16137
#define MACROLOP_PRIVATE_EVAL_REC_16136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16137(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16137_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16137_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16137_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16137_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16138
#define MACROLOP_PRIVATE_EVAL_REC_16137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16138(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16138_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16138_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16138_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16138_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16139
#define MACROLOP_PRIVATE_EVAL_REC_16138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16139(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16139_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16139_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16139_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16139_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16140
#define MACROLOP_PRIVATE_EVAL_REC_16139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16140(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16140_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16140_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16140_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16140_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16141
#define MACROLOP_PRIVATE_EVAL_REC_16140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16141(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16141_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16141_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16141_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16141_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16142
#define MACROLOP_PRIVATE_EVAL_REC_16141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16142(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16142_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16142_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16142_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16142_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16143
#define MACROLOP_PRIVATE_EVAL_REC_16142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16143(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16143_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16143_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16143_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16143_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16144
#define MACROLOP_PRIVATE_EVAL_REC_16143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16144(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16144_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16144_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16144_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16144_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16145
#define MACROLOP_PRIVATE_EVAL_REC_16144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16145(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16145_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16145_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16145_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16145_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16146
#define MACROLOP_PRIVATE_EVAL_REC_16145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16146(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16146_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16146_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16146_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16146_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16147
#define MACROLOP_PRIVATE_EVAL_REC_16146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16147(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16147_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16147_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16147_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16147_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16148
#define MACROLOP_PRIVATE_EVAL_REC_16147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16148(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16148_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16148_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16148_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16148_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16149
#define MACROLOP_PRIVATE_EVAL_REC_16148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16149(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16149_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16149_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16149_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16149_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16150
#define MACROLOP_PRIVATE_EVAL_REC_16149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16150(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16150_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16150_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16150_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16150_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16151
#define MACROLOP_PRIVATE_EVAL_REC_16150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16151(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16151_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16151_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16151_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16151_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16152
#define MACROLOP_PRIVATE_EVAL_REC_16151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16152(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16152_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16152_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16152_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16152_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16153
#define MACROLOP_PRIVATE_EVAL_REC_16152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16153(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16153_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16153_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16153_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16153_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16154
#define MACROLOP_PRIVATE_EVAL_REC_16153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16154(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16154_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16154_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16154_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16154_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16155
#define MACROLOP_PRIVATE_EVAL_REC_16154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16155(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16155_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16155_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16155_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16155_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16156
#define MACROLOP_PRIVATE_EVAL_REC_16155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16156(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16156_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16156_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16156_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16156_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16157
#define MACROLOP_PRIVATE_EVAL_REC_16156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16157(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16157_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16157_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16157_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16157_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16158
#define MACROLOP_PRIVATE_EVAL_REC_16157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16158(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16158_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16158_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16158_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16158_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16159
#define MACROLOP_PRIVATE_EVAL_REC_16158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16159(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16159_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16159_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16159_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16159_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16160
#define MACROLOP_PRIVATE_EVAL_REC_16159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16160(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16160_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16160_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16160_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16160_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16161
#define MACROLOP_PRIVATE_EVAL_REC_16160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16161(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16161_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16161_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16161_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16161_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16162
#define MACROLOP_PRIVATE_EVAL_REC_16161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16162(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16162_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16162_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16162_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16162_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16163
#define MACROLOP_PRIVATE_EVAL_REC_16162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16163(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16163_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16163_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16163_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16163_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16164
#define MACROLOP_PRIVATE_EVAL_REC_16163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16164(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16164_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16164_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16164_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16164_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16165
#define MACROLOP_PRIVATE_EVAL_REC_16164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16165(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16165_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16165_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16165_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16165_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16166
#define MACROLOP_PRIVATE_EVAL_REC_16165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16166(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16166_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16166_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16166_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16166_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16167
#define MACROLOP_PRIVATE_EVAL_REC_16166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16167(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16167_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16167_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16167_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16167_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16168
#define MACROLOP_PRIVATE_EVAL_REC_16167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16168(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16168_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16168_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16168_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16168_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16169
#define MACROLOP_PRIVATE_EVAL_REC_16168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16169(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16169_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16169_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16169_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16169_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16170
#define MACROLOP_PRIVATE_EVAL_REC_16169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16170(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16170_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16170_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16170_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16170_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16171
#define MACROLOP_PRIVATE_EVAL_REC_16170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16171(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16171_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16171_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16171_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16171_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16172
#define MACROLOP_PRIVATE_EVAL_REC_16171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16172(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16172_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16172_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16172_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16172_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16173
#define MACROLOP_PRIVATE_EVAL_REC_16172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16173(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16173_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16173_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16173_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16173_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16174
#define MACROLOP_PRIVATE_EVAL_REC_16173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16174(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16174_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16174_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16174_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16174_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16175
#define MACROLOP_PRIVATE_EVAL_REC_16174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16175(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16175_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16175_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16175_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16175_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16176
#define MACROLOP_PRIVATE_EVAL_REC_16175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16176(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16176_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16176_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16176_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16176_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16177
#define MACROLOP_PRIVATE_EVAL_REC_16176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16177(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16177_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16177_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16177_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16177_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16178
#define MACROLOP_PRIVATE_EVAL_REC_16177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16178(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16178_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16178_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16178_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16178_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16179
#define MACROLOP_PRIVATE_EVAL_REC_16178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16179(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16179_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16179_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16179_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16179_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16180
#define MACROLOP_PRIVATE_EVAL_REC_16179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16180(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16180_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16180_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16180_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16180_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16181
#define MACROLOP_PRIVATE_EVAL_REC_16180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16181(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16181_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16181_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16181_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16181_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16182
#define MACROLOP_PRIVATE_EVAL_REC_16181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16182(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16182_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16182_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16182_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16182_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16183
#define MACROLOP_PRIVATE_EVAL_REC_16182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16183(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16183_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16183_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16183_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16183_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16184
#define MACROLOP_PRIVATE_EVAL_REC_16183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16184(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16184_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16184_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16184_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16184_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16185
#define MACROLOP_PRIVATE_EVAL_REC_16184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16185(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16185_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16185_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16185_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16185_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16186
#define MACROLOP_PRIVATE_EVAL_REC_16185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16186(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16186_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16186_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16186_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16186_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16187
#define MACROLOP_PRIVATE_EVAL_REC_16186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16187(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16187_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16187_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16187_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16187_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16188
#define MACROLOP_PRIVATE_EVAL_REC_16187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16188(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16188_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16188_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16188_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16188_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16189
#define MACROLOP_PRIVATE_EVAL_REC_16188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16189(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16189_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16189_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16189_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16189_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16190
#define MACROLOP_PRIVATE_EVAL_REC_16189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16190(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16190_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16190_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16190_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16190_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16191
#define MACROLOP_PRIVATE_EVAL_REC_16190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16191(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16191_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16191_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16191_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16191_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16192
#define MACROLOP_PRIVATE_EVAL_REC_16191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16192(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16192_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16192_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16192_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16192_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16193
#define MACROLOP_PRIVATE_EVAL_REC_16192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16193(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16193_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16193_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16193_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16193_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16194
#define MACROLOP_PRIVATE_EVAL_REC_16193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16194(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16194_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16194_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16194_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16194_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16195
#define MACROLOP_PRIVATE_EVAL_REC_16194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16195(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16195_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16195_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16195_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16195_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16196
#define MACROLOP_PRIVATE_EVAL_REC_16195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16196(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16196_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16196_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16196_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16196_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16197
#define MACROLOP_PRIVATE_EVAL_REC_16196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16197(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16197_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16197_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16197_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16197_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16198
#define MACROLOP_PRIVATE_EVAL_REC_16197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16198(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16198_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16198_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16198_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16198_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16199
#define MACROLOP_PRIVATE_EVAL_REC_16198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16199(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16199_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16199_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16199_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16199_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16200
#define MACROLOP_PRIVATE_EVAL_REC_16199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16200(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16200_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16200_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16200_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16200_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16201
#define MACROLOP_PRIVATE_EVAL_REC_16200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16201(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16201_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16201_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16201_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16201_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16202
#define MACROLOP_PRIVATE_EVAL_REC_16201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16202(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16202_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16202_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16202_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16202_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16203
#define MACROLOP_PRIVATE_EVAL_REC_16202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16203(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16203_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16203_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16203_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16203_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16204
#define MACROLOP_PRIVATE_EVAL_REC_16203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16204(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16204_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16204_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16204_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16204_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16205
#define MACROLOP_PRIVATE_EVAL_REC_16204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16205(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16205_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16205_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16205_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16205_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16206
#define MACROLOP_PRIVATE_EVAL_REC_16205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16206(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16206_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16206_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16206_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16206_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16207
#define MACROLOP_PRIVATE_EVAL_REC_16206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16207(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16207_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16207_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16207_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16207_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16208
#define MACROLOP_PRIVATE_EVAL_REC_16207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16208(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16208_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16208_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16208_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16208_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16209
#define MACROLOP_PRIVATE_EVAL_REC_16208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16209(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16209_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16209_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16209_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16209_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16210
#define MACROLOP_PRIVATE_EVAL_REC_16209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16210(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16210_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16210_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16210_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16210_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16211
#define MACROLOP_PRIVATE_EVAL_REC_16210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16211(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16211_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16211_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16211_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16211_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16212
#define MACROLOP_PRIVATE_EVAL_REC_16211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16212(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16212_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16212_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16212_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16212_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16213
#define MACROLOP_PRIVATE_EVAL_REC_16212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16213(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16213_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16213_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16213_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16213_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16214
#define MACROLOP_PRIVATE_EVAL_REC_16213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16214(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16214_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16214_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16214_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16214_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16215
#define MACROLOP_PRIVATE_EVAL_REC_16214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16215(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16215_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16215_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16215_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16215_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16216
#define MACROLOP_PRIVATE_EVAL_REC_16215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16216(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16216_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16216_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16216_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16216_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16217
#define MACROLOP_PRIVATE_EVAL_REC_16216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16217(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16217_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16217_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16217_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16217_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16218
#define MACROLOP_PRIVATE_EVAL_REC_16217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16218(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16218_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16218_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16218_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16218_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16219
#define MACROLOP_PRIVATE_EVAL_REC_16218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16219(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16219_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16219_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16219_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16219_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16220
#define MACROLOP_PRIVATE_EVAL_REC_16219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16220(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16220_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16220_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16220_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16220_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16221
#define MACROLOP_PRIVATE_EVAL_REC_16220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16221(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16221_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16221_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16221_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16221_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16222
#define MACROLOP_PRIVATE_EVAL_REC_16221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16222(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16222_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16222_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16222_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16222_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16223
#define MACROLOP_PRIVATE_EVAL_REC_16222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16223(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16223_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16223_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16223_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16223_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16224
#define MACROLOP_PRIVATE_EVAL_REC_16223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16224(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16224_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16224_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16224_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16224_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16225
#define MACROLOP_PRIVATE_EVAL_REC_16224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16225(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16225_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16225_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16225_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16225_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16226
#define MACROLOP_PRIVATE_EVAL_REC_16225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16226(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16226_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16226_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16226_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16226_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16227
#define MACROLOP_PRIVATE_EVAL_REC_16226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16227(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16227_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16227_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16227_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16227_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16228
#define MACROLOP_PRIVATE_EVAL_REC_16227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16228(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16228_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16228_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16228_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16228_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16229
#define MACROLOP_PRIVATE_EVAL_REC_16228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16229(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16229_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16229_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16229_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16229_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16230
#define MACROLOP_PRIVATE_EVAL_REC_16229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16230(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16230_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16230_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16230_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16230_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16231
#define MACROLOP_PRIVATE_EVAL_REC_16230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16231(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16231_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16231_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16231_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16231_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16232
#define MACROLOP_PRIVATE_EVAL_REC_16231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16232(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16232_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16232_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16232_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16232_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16233
#define MACROLOP_PRIVATE_EVAL_REC_16232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16233(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16233_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16233_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16233_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16233_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16234
#define MACROLOP_PRIVATE_EVAL_REC_16233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16234(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16234_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16234_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16234_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16234_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16235
#define MACROLOP_PRIVATE_EVAL_REC_16234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16235(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16235_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16235_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16235_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16235_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16236
#define MACROLOP_PRIVATE_EVAL_REC_16235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16236(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16236_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16236_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16236_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16236_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16237
#define MACROLOP_PRIVATE_EVAL_REC_16236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16237(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16237_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16237_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16237_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16237_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16238
#define MACROLOP_PRIVATE_EVAL_REC_16237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16238(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16238_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16238_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16238_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16238_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16239
#define MACROLOP_PRIVATE_EVAL_REC_16238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16239(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16239_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16239_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16239_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16239_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16240
#define MACROLOP_PRIVATE_EVAL_REC_16239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16240(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16240_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16240_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16240_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16240_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16241
#define MACROLOP_PRIVATE_EVAL_REC_16240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16241(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16241_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16241_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16241_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16241_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16242
#define MACROLOP_PRIVATE_EVAL_REC_16241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16242(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16242_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16242_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16242_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16242_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16243
#define MACROLOP_PRIVATE_EVAL_REC_16242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16243(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16243_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16243_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16243_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16243_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16244
#define MACROLOP_PRIVATE_EVAL_REC_16243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16244(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16244_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16244_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16244_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16244_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16245
#define MACROLOP_PRIVATE_EVAL_REC_16244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16245(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16245_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16245_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16245_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16245_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16246
#define MACROLOP_PRIVATE_EVAL_REC_16245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16246(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16246_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16246_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16246_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16246_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16247
#define MACROLOP_PRIVATE_EVAL_REC_16246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16247(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16247_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16247_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16247_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16247_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16248
#define MACROLOP_PRIVATE_EVAL_REC_16247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16248(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16248_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16248_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16248_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16248_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16249
#define MACROLOP_PRIVATE_EVAL_REC_16248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16249(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16249_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16249_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16249_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16249_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16250
#define MACROLOP_PRIVATE_EVAL_REC_16249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16250(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16250_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16250_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16250_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16250_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16251
#define MACROLOP_PRIVATE_EVAL_REC_16250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16251(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16251_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16251_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16251_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16251_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16252
#define MACROLOP_PRIVATE_EVAL_REC_16251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16252(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16252_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16252_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16252_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16252_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16253
#define MACROLOP_PRIVATE_EVAL_REC_16252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16253(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16253_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16253_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16253_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16253_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16254
#define MACROLOP_PRIVATE_EVAL_REC_16253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16254(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16254_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16254_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16254_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16254_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16255
#define MACROLOP_PRIVATE_EVAL_REC_16254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16255(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16255_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16255_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16255_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16255_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16256
#define MACROLOP_PRIVATE_EVAL_REC_16255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16256(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16256_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16256_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16256_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16256_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16257
#define MACROLOP_PRIVATE_EVAL_REC_16256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16257(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16257_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16257_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16257_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16257_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16258
#define MACROLOP_PRIVATE_EVAL_REC_16257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16258(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16258_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16258_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16258_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16258_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16259
#define MACROLOP_PRIVATE_EVAL_REC_16258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16259(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16259_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16259_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16259_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16259_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16260
#define MACROLOP_PRIVATE_EVAL_REC_16259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16260(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16260_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16260_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16260_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16260_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16261
#define MACROLOP_PRIVATE_EVAL_REC_16260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16261(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16261_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16261_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16261_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16261_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16262
#define MACROLOP_PRIVATE_EVAL_REC_16261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16262(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16262_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16262_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16262_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16262_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16263
#define MACROLOP_PRIVATE_EVAL_REC_16262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16263(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16263_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16263_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16263_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16263_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16264
#define MACROLOP_PRIVATE_EVAL_REC_16263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16264(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16264_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16264_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16264_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16264_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16265
#define MACROLOP_PRIVATE_EVAL_REC_16264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16265(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16265_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16265_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16265_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16265_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16266
#define MACROLOP_PRIVATE_EVAL_REC_16265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16266(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16266_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16266_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16266_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16266_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16267
#define MACROLOP_PRIVATE_EVAL_REC_16266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16267(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16267_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16267_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16267_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16267_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16268
#define MACROLOP_PRIVATE_EVAL_REC_16267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16268(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16268_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16268_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16268_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16268_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16269
#define MACROLOP_PRIVATE_EVAL_REC_16268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16269(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16269_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16269_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16269_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16269_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16270
#define MACROLOP_PRIVATE_EVAL_REC_16269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16270(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16270_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16270_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16270_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16270_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16271
#define MACROLOP_PRIVATE_EVAL_REC_16270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16271(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16271_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16271_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16271_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16271_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16272
#define MACROLOP_PRIVATE_EVAL_REC_16271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16272(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16272_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16272_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16272_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16272_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16273
#define MACROLOP_PRIVATE_EVAL_REC_16272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16273(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16273_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16273_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16273_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16273_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16274
#define MACROLOP_PRIVATE_EVAL_REC_16273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16274(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16274_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16274_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16274_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16274_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16275
#define MACROLOP_PRIVATE_EVAL_REC_16274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16275(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16275_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16275_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16275_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16275_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16276
#define MACROLOP_PRIVATE_EVAL_REC_16275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16276(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16276_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16276_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16276_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16276_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16277
#define MACROLOP_PRIVATE_EVAL_REC_16276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16277(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16277_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16277_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16277_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16277_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16278
#define MACROLOP_PRIVATE_EVAL_REC_16277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16278(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16278_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16278_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16278_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16278_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16279
#define MACROLOP_PRIVATE_EVAL_REC_16278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16279(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16279_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16279_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16279_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16279_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16280
#define MACROLOP_PRIVATE_EVAL_REC_16279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16280(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16280_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16280_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16280_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16280_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16281
#define MACROLOP_PRIVATE_EVAL_REC_16280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16281(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16281_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16281_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16281_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16281_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16282
#define MACROLOP_PRIVATE_EVAL_REC_16281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16282(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16282_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16282_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16282_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16282_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16283
#define MACROLOP_PRIVATE_EVAL_REC_16282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16283(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16283_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16283_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16283_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16283_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16284
#define MACROLOP_PRIVATE_EVAL_REC_16283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16284(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16284_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16284_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16284_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16284_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16285
#define MACROLOP_PRIVATE_EVAL_REC_16284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16285(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16285_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16285_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16285_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16285_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16286
#define MACROLOP_PRIVATE_EVAL_REC_16285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16286(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16286_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16286_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16286_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16286_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16287
#define MACROLOP_PRIVATE_EVAL_REC_16286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16287(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16287_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16287_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16287_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16287_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16288
#define MACROLOP_PRIVATE_EVAL_REC_16287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16288(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16288_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16288_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16288_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16288_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16289
#define MACROLOP_PRIVATE_EVAL_REC_16288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16289(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16289_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16289_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16289_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16289_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16290
#define MACROLOP_PRIVATE_EVAL_REC_16289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16290(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16290_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16290_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16290_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16290_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16291
#define MACROLOP_PRIVATE_EVAL_REC_16290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16291(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16291_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16291_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16291_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16291_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16292
#define MACROLOP_PRIVATE_EVAL_REC_16291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16292(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16292_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16292_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16292_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16292_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16293
#define MACROLOP_PRIVATE_EVAL_REC_16292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16293(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16293_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16293_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16293_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16293_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16294
#define MACROLOP_PRIVATE_EVAL_REC_16293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16294(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16294_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16294_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16294_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16294_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16295
#define MACROLOP_PRIVATE_EVAL_REC_16294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16295(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16295_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16295_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16295_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16295_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16296
#define MACROLOP_PRIVATE_EVAL_REC_16295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16296(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16296_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16296_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16296_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16296_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16297
#define MACROLOP_PRIVATE_EVAL_REC_16296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16297(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16297_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16297_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16297_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16297_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16298
#define MACROLOP_PRIVATE_EVAL_REC_16297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16298(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16298_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16298_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16298_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16298_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16299
#define MACROLOP_PRIVATE_EVAL_REC_16298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16299(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16299_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16299_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16299_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16299_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16300
#define MACROLOP_PRIVATE_EVAL_REC_16299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16300(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16300_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16300_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16300_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16300_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16301
#define MACROLOP_PRIVATE_EVAL_REC_16300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16301(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16301_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16301_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16301_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16301_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16302
#define MACROLOP_PRIVATE_EVAL_REC_16301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16302(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16302_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16302_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16302_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16302_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16303
#define MACROLOP_PRIVATE_EVAL_REC_16302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16303(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16303_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16303_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16303_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16303_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16304
#define MACROLOP_PRIVATE_EVAL_REC_16303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16304(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16304_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16304_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16304_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16304_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16305
#define MACROLOP_PRIVATE_EVAL_REC_16304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16305(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16305_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16305_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16305_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16305_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16306
#define MACROLOP_PRIVATE_EVAL_REC_16305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16306(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16306_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16306_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16306_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16306_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16307
#define MACROLOP_PRIVATE_EVAL_REC_16306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16307(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16307_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16307_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16307_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16307_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16308
#define MACROLOP_PRIVATE_EVAL_REC_16307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16308(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16308_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16308_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16308_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16308_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16309
#define MACROLOP_PRIVATE_EVAL_REC_16308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16309(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16309_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16309_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16309_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16309_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16310
#define MACROLOP_PRIVATE_EVAL_REC_16309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16310(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16310_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16310_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16310_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16310_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16311
#define MACROLOP_PRIVATE_EVAL_REC_16310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16311(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16311_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16311_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16311_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16311_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16312
#define MACROLOP_PRIVATE_EVAL_REC_16311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16312(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16312_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16312_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16312_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16312_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16313
#define MACROLOP_PRIVATE_EVAL_REC_16312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16313(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16313_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16313_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16313_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16313_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16314
#define MACROLOP_PRIVATE_EVAL_REC_16313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16314(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16314_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16314_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16314_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16314_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16315
#define MACROLOP_PRIVATE_EVAL_REC_16314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16315(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16315_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16315_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16315_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16315_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16316
#define MACROLOP_PRIVATE_EVAL_REC_16315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16316(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16316_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16316_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16316_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16316_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16317
#define MACROLOP_PRIVATE_EVAL_REC_16316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16317(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16317_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16317_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16317_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16317_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16318
#define MACROLOP_PRIVATE_EVAL_REC_16317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16318(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16318_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16318_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16318_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16318_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16319
#define MACROLOP_PRIVATE_EVAL_REC_16318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16319(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16319_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16319_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16319_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16319_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16320
#define MACROLOP_PRIVATE_EVAL_REC_16319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16320(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16320_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16320_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16320_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16320_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16321
#define MACROLOP_PRIVATE_EVAL_REC_16320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16321(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16321_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16321_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16321_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16321_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16322
#define MACROLOP_PRIVATE_EVAL_REC_16321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16322(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16322_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16322_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16322_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16322_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16323
#define MACROLOP_PRIVATE_EVAL_REC_16322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16323(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16323_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16323_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16323_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16323_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16324
#define MACROLOP_PRIVATE_EVAL_REC_16323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16324(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16324_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16324_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16324_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16324_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16325
#define MACROLOP_PRIVATE_EVAL_REC_16324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16325(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16325_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16325_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16325_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16325_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16326
#define MACROLOP_PRIVATE_EVAL_REC_16325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16326(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16326_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16326_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16326_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16326_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16327
#define MACROLOP_PRIVATE_EVAL_REC_16326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16327(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16327_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16327_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16327_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16327_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16328
#define MACROLOP_PRIVATE_EVAL_REC_16327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16328(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16328_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16328_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16328_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16328_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16329
#define MACROLOP_PRIVATE_EVAL_REC_16328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16329(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16329_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16329_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16329_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16329_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16330
#define MACROLOP_PRIVATE_EVAL_REC_16329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16330(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16330_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16330_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16330_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16330_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16331
#define MACROLOP_PRIVATE_EVAL_REC_16330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16331(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16331_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16331_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16331_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16331_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16332
#define MACROLOP_PRIVATE_EVAL_REC_16331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16332(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16332_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16332_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16332_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16332_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16333
#define MACROLOP_PRIVATE_EVAL_REC_16332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16333(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16333_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16333_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16333_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16333_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16334
#define MACROLOP_PRIVATE_EVAL_REC_16333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16334(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16334_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16334_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16334_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16334_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16335
#define MACROLOP_PRIVATE_EVAL_REC_16334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16335(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16335_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16335_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16335_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16335_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16336
#define MACROLOP_PRIVATE_EVAL_REC_16335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16336(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16336_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16336_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16336_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16336_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16337
#define MACROLOP_PRIVATE_EVAL_REC_16336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16337(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16337_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16337_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16337_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16337_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16338
#define MACROLOP_PRIVATE_EVAL_REC_16337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16338(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16338_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16338_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16338_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16338_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16339
#define MACROLOP_PRIVATE_EVAL_REC_16338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16339(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16339_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16339_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16339_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16339_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16340
#define MACROLOP_PRIVATE_EVAL_REC_16339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16340(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16340_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16340_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16340_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16340_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16341
#define MACROLOP_PRIVATE_EVAL_REC_16340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16341(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16341_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16341_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16341_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16341_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16342
#define MACROLOP_PRIVATE_EVAL_REC_16341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16342(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16342_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16342_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16342_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16342_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16343
#define MACROLOP_PRIVATE_EVAL_REC_16342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16343(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16343_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16343_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16343_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16343_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16344
#define MACROLOP_PRIVATE_EVAL_REC_16343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16344(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16344_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16344_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16344_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16344_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16345
#define MACROLOP_PRIVATE_EVAL_REC_16344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16345(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16345_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16345_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16345_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16345_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16346
#define MACROLOP_PRIVATE_EVAL_REC_16345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16346(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16346_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16346_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16346_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16346_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16347
#define MACROLOP_PRIVATE_EVAL_REC_16346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16347(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16347_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16347_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16347_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16347_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16348
#define MACROLOP_PRIVATE_EVAL_REC_16347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16348(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16348_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16348_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16348_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16348_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16349
#define MACROLOP_PRIVATE_EVAL_REC_16348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16349(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16349_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16349_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16349_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16349_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16350
#define MACROLOP_PRIVATE_EVAL_REC_16349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16350(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16350_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16350_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16350_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16350_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16351
#define MACROLOP_PRIVATE_EVAL_REC_16350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16351(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16351_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16351_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16351_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16351_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16352
#define MACROLOP_PRIVATE_EVAL_REC_16351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16352(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16352_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16352_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16352_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16352_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16353
#define MACROLOP_PRIVATE_EVAL_REC_16352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16353(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16353_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16353_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16353_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16353_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16354
#define MACROLOP_PRIVATE_EVAL_REC_16353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16354(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16354_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16354_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16354_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16354_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16355
#define MACROLOP_PRIVATE_EVAL_REC_16354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16355(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16355_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16355_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16355_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16355_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16356
#define MACROLOP_PRIVATE_EVAL_REC_16355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16356(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16356_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16356_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16356_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16356_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16357
#define MACROLOP_PRIVATE_EVAL_REC_16356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16357(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16357_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16357_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16357_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16357_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16358
#define MACROLOP_PRIVATE_EVAL_REC_16357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16358(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16358_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16358_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16358_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16358_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16359
#define MACROLOP_PRIVATE_EVAL_REC_16358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16359(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16359_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16359_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16359_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16359_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16360
#define MACROLOP_PRIVATE_EVAL_REC_16359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16360(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16360_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16360_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16360_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16360_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16361
#define MACROLOP_PRIVATE_EVAL_REC_16360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16361(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16361_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16361_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16361_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16361_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16362
#define MACROLOP_PRIVATE_EVAL_REC_16361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16362(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16362_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16362_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16362_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16362_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16363
#define MACROLOP_PRIVATE_EVAL_REC_16362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16363(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16363_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16363_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16363_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16363_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16364
#define MACROLOP_PRIVATE_EVAL_REC_16363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16364(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16364_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16364_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16364_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16364_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16365
#define MACROLOP_PRIVATE_EVAL_REC_16364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16365(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16365_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16365_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16365_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16365_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16366
#define MACROLOP_PRIVATE_EVAL_REC_16365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16366(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16366_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16366_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16366_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16366_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16367
#define MACROLOP_PRIVATE_EVAL_REC_16366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16367(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16367_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16367_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16367_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16367_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16368
#define MACROLOP_PRIVATE_EVAL_REC_16367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16368(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16368_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16368_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16368_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16368_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16369
#define MACROLOP_PRIVATE_EVAL_REC_16368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16369(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16369_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16369_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16369_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16369_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16370
#define MACROLOP_PRIVATE_EVAL_REC_16369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16370(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16370_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16370_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16370_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16370_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16371
#define MACROLOP_PRIVATE_EVAL_REC_16370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16371(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16371_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16371_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16371_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16371_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16372
#define MACROLOP_PRIVATE_EVAL_REC_16371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16372(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16372_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16372_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16372_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16372_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16373
#define MACROLOP_PRIVATE_EVAL_REC_16372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16373(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16373_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16373_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16373_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16373_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16374
#define MACROLOP_PRIVATE_EVAL_REC_16373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16374(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16374_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16374_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16374_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16374_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16375
#define MACROLOP_PRIVATE_EVAL_REC_16374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16375(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16375_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16375_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16375_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16375_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16376
#define MACROLOP_PRIVATE_EVAL_REC_16375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16376(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16376_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16376_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16376_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16376_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16377
#define MACROLOP_PRIVATE_EVAL_REC_16376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16377(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16377_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16377_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16377_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16377_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16378
#define MACROLOP_PRIVATE_EVAL_REC_16377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16378(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16378_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16378_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16378_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16378_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16379
#define MACROLOP_PRIVATE_EVAL_REC_16378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16379(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16379_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16379_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16379_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16379_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16380
#define MACROLOP_PRIVATE_EVAL_REC_16379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16380(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16380_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16380_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16380_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16380_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16381
#define MACROLOP_PRIVATE_EVAL_REC_16380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16381(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16381_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16381_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16381_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16381_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16382
#define MACROLOP_PRIVATE_EVAL_REC_16381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16382(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16382_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16382_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16382_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16382_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16383
#define MACROLOP_PRIVATE_EVAL_REC_16382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_16383(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_16383_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_16383_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_16383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_16383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_16383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_16383_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_16383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_16383_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_16383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_16383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_16384
#define MACROLOP_PRIVATE_EVAL_REC_16383_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_15360_TO_16383_H