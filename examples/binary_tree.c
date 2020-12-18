#include <epilepsy.h>

#include <stdio.h>

#define TreeNode_REAL(lhs, data, rhs) EPILEPSY_CHOICE(v(TreeNode) Node(v(lhs), v(data), v(rhs)))
#define TreeLeaf_REAL(x)              EPILEPSY_CHOICE(v(TreeLeaf) v(x))

#define Node_REAL(lhs, data, rhs) EPILEPSY_RECORD(v(lhs) v(data) v(rhs))
#define NodeLhs_REAL(node)        EPILEPSY_RECORD_GET(v(node), v(0))
#define NodeData_REAL(node)       EPILEPSY_RECORD_GET(v(node), v(1))
#define NodeRhs_REAL(node)        EPILEPSY_RECORD_GET(v(node), v(2))

#define TreeNode(lhs, data, rhs) call(TreeNode_REAL, lhs data rhs)
#define TreeLeaf(x)              call(TreeLeaf_REAL, x)

#define Node(lhs, data, rhs) call(Node_REAL, lhs data rhs)
#define NodeLhs(node)        call(NodeLhs_REAL, node)
#define NodeData(node)       call(NodeData_REAL, node)
#define NodeRhs(node)        call(NodeRhs_REAL, node)

#define SUM(tree)          call(SUM_REAL, tree)
#define SUM_REAL(tree)     EPILEPSY_MATCH(v(tree), v(SUM_))
#define SUM_TreeNode(node) SUM(NodeLhs(v(node))) v(+) NodeData(v(node)) v(+) SUM(NodeRhs(v(node)))
#define SUM_TreeLeaf(x)    v(x)

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

int main(void) {
    // 1 + 2 + 3 + 4 + 5 + 6 + 7
    printf("%d\n", EPILEPSY_EVAL(SUM(TREE)));
}
