#include "../assert.h"

#include "../../include/macrolop/lang.h"
#include "../../include/macrolop/variadics.h"

ASSERT_EQ(MACROLOP_VARIADICS_COUNT(), v(1));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~)), v(1));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~)), v(2));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~)), v(3));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~)), v(4));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~)), v(5));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~)), v(6));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(7));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(8));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(9));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(10));
ASSERT_EQ(MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(11));
ASSERT_EQ(
    MACROLOP_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                 v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                     v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                         v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                             v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                 v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                     v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                         v(~) v(~) v(~) v(~)),
    v(85));

ASSERT_EQ(
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
