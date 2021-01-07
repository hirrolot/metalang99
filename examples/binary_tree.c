// Sums all nodes of a binary tree, recursively.

#include <epilepsy.h>

#define TreeLeaf(x)              EPILEPSY_call(TreeLeaf, x)
#define TreeNode(lhs, data, rhs) EPILEPSY_call(TreeNode, lhs data rhs)

#define SUM(tree) EPILEPSY_call(SUM, tree)

#define TreeLeaf_IMPL(x)              EPILEPSY_choice(v(TreeLeaf), v(x))
#define TreeNode_IMPL(lhs, data, rhs) EPILEPSY_choice(v(TreeNode), v(lhs, data, rhs))

#define SUM_IMPL(tree)                    EPILEPSY_match(v(tree), v(SUM_))
#define SUM_TreeLeaf_IMPL(x)              v(x)
#define SUM_TreeNode_IMPL(lhs, data, rhs) EPILEPSY_uintAddVariadics(SUM(v(lhs)) v(data) SUM(v(rhs)))

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

EPILEPSY_assertEq(SUM(TREE), v(28));

int main(void) {}
