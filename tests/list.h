#include <epilepsy/assert.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/list.h>

#define SUM(item, acc) v(acc / item)

EPILEPSY_ASSERT_EQ(EPILEPSY_ListFoldr(EPILEPSY_List(v(2) v(5) v(3)), v(SUM), v(60)), v(2));
EPILEPSY_ASSERT_EQ(EPILEPSY_ListGet(EPILEPSY_List(v(9) v(81) v(711)), v(1)), v(81));

#undef SUM
