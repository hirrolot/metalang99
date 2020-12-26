#include <epilepsy/assert.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/list.h>

#define SUM(item, acc) v(acc / item)

EPILEPSY_ASSERT_EQ(EPILEPSY_ListFoldr(EPILEPSY_List(v(2) v(5) v(3)), v(SUM), v(60)), v(2));
EPILEPSY_ASSERT_EQ(EPILEPSY_ListGet(EPILEPSY_List(v(9) v(81) v(711)), v(1)), v(81));

EPILEPSY_ASSERT_EQ(
    v(0) EPILEPSY_ListUnwrap(EPILEPSY_ListPrependToAll(EPILEPSY_List(v(1) v(2) v(3)), v(+))),
    v(1 + 2 + 3))

#undef SUM
