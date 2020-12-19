// Sums all nodes of a binary tree, recursively.

#include <epilepsy.h>

#include <stdio.h>

// Desugaring {
#define TreeLeaf(x)              call(TreeLeaf_IMPL, x)
#define TreeNode(lhs, data, rhs) call(TreeNode_IMPL, lhs data rhs)

#define SUM(tree) call(SUM_IMPL, tree)
// }

// Implementation {
#define TreeLeaf_IMPL(x)              EPILEPSY_CHOICE(v(TreeLeaf), v(x))
#define TreeNode_IMPL(lhs, data, rhs) EPILEPSY_CHOICE(v(TreeNode), v(lhs, data, rhs))

#define SUM_IMPL(tree)               EPILEPSY_MATCH(v(tree), v(SUM_))
#define SUM_TreeLeaf(x)              v(x)
#define SUM_TreeNode(lhs, data, rhs) EPILEPSY_UINT_ADD(SUM(v(lhs)) v(data) SUM(v(rhs)))
// }

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
