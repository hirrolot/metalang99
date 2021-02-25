// Sums all nodes of a binary tree, recursively.

#include <metalang99.h>

#define TreeLeaf(x)              M_call(TreeLeaf, x)
#define TreeNode(lhs, data, rhs) M_call(TreeNode, lhs, data, rhs)

#define SUM(tree) M_call(SUM, tree)

#define TreeLeaf_IMPL(x)              M_choice(v(TreeLeaf), v(x))
#define TreeNode_IMPL(lhs, data, rhs) M_choice(v(TreeNode), v(lhs, data, rhs))

#define SUM_IMPL(tree)                    M_match(v(tree), v(SUM_))
#define SUM_TreeLeaf_IMPL(x)              v(x)
#define SUM_TreeNode_IMPL(lhs, data, rhs) M_add3(SUM(v(lhs)), v(data), SUM(v(rhs)))

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

M_assertEq(SUM(TREE), v(28));

int main(void) {}
