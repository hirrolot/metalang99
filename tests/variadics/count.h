#include <macrolop/assert.h>

#include <macrolop/lang.h>
#include <macrolop/variadics.h>

MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(), v(1));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~)), v(1));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~)), v(2));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~)), v(3));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~)), v(4));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~)), v(5));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~)), v(6));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(7));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(8));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(9));
MACROLOP_ASSERT_EQ(
    MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(10));
MACROLOP_ASSERT_EQ(
    MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(11));
MACROLOP_ASSERT_EQ(
    MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                 v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                     v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                         v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                             v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                 v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                     v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                         v(~) v(~) v(~) v(~)),
    v(85));

MACROLOP_ASSERT_EQ(
    MACROLOP_VARIADICS_COUNT(
        v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
            v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                    v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                        v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                            v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                    v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                        v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                            v(~) v(~)),
    v(137));
