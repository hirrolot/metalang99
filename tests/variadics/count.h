#include <epilepsy/assert.h>

#include <epilepsy/lang.h>
#include <epilepsy/variadics.h>

EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(), v(1));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~)), v(1));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~) v(~)), v(2));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~)), v(3));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~)), v(4));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~)), v(5));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~)), v(6));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(7));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(8));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(9));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(10));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(11));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_VARIADICS_COUNT(v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                 v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                     v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                         v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                             v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                 v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                     v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)
                                                         v(~) v(~) v(~) v(~)),
    v(85));

EPILEPSY_ASSERT_EQ(
    EPILEPSY_VARIADICS_COUNT(
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
