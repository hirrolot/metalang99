#include <epilepsy.h>

#include <stdio.h>

#define TreeNode(lhs, data, rhs) call(TreeNode_IMPL, lhs data rhs)
#define TreeLeaf(x)              call(TreeLeaf_IMPL, x)

#define Node(lhs, data, rhs) call(Node_IMPL, lhs data rhs)
#define NodeLhs(node)        call(NodeLhs_IMPL, node)
#define NodeData(node)       call(NodeData_IMPL, node)
#define NodeRhs(node)        call(NodeRhs_IMPL, node)

#define SUM(tree) call(SUM_IMPL, tree)

#define TreeNode_IMPL(lhs, data, rhs) EPILEPSY_CHOICE(v(TreeNode) Node(v(lhs), v(data), v(rhs)))
#define TreeLeaf_IMPL(x)              EPILEPSY_CHOICE(v(TreeLeaf) v(x))

#define Node_IMPL(lhs, data, rhs) EPILEPSY_RECORD(v(lhs) v(data) v(rhs))
#define NodeLhs_IMPL(node)        EPILEPSY_RECORD_GET(v(node), v(0))
#define NodeData_IMPL(node)       EPILEPSY_RECORD_GET(v(node), v(1))
#define NodeRhs_IMPL(node)        EPILEPSY_RECORD_GET(v(node), v(2))

#define SUM_IMPL(tree) EPILEPSY_MATCH(v(tree), v(SUM_))
#define SUM_TreeNode(node)                                                                         \
    EPILEPSY_UINT_ADD(                                                                             \
        EPILEPSY_UINT_ADD(SUM(NodeLhs(v(node))), NodeData(v(node))), SUM(NodeRhs(v(node))))
#define SUM_TreeLeaf(x) v(x)

/*
 *         4
 *        / \
 *       /   \
 *      /     \
 *     2       6
 *    / \     / \
 *   1   3   5   7
 */
#define TREE                                                                                       \
    TreeNode(                                                                                      \
        TreeNode(TreeLeaf(v(1)), v(2), TreeLeaf(v(3))), v(4),                                      \
        TreeNode(TreeLeaf(v(5)), v(6), TreeLeaf(v(7))))

EPILEPSY_ASSERT_EQ(SUM(TREE), v(28));

int main(void) {}
