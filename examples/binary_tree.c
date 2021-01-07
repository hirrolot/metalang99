// Sums all nodes of a binary tree, recursively.

#include <epilepsy.h>

#define TreeLeaf(x)              epCall(TreeLeaf, x)
#define TreeNode(lhs, data, rhs) epCall(TreeNode, lhs data rhs)

#define SUM(tree) epCall(SUM, tree)

#define TreeLeaf_IMPL(x)              epChoice(v(TreeLeaf), v(x))
#define TreeNode_IMPL(lhs, data, rhs) epChoice(v(TreeNode), v(lhs, data, rhs))

#define SUM_IMPL(tree)                    epMatch(v(tree), v(SUM_))
#define SUM_TreeLeaf_IMPL(x)              v(x)
#define SUM_TreeNode_IMPL(lhs, data, rhs) epUIntAddVariadics(SUM(v(lhs)) v(data) SUM(v(rhs)))

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
        TreeNode(TreeLeaf(v(1)), v(2), TreeLeaf(v(3))),                                            \
        v(4),                                                                                      \
        TreeNode(TreeLeaf(v(5)), v(6), TreeLeaf(v(7))))

epAssertEq(SUM(TREE), v(28));

int main(void) {}
