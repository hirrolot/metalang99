// Sums all nodes of a binary tree, recursively.

#include <metalang99.h>

#define Leaf(x)              ML99_choice(v(Leaf), x)
#define Node(lhs, data, rhs) ML99_choice(v(Node), lhs, data, rhs)

#define SUM(tree)                     ML99_match(tree, v(SUM_))
#define SUM_Leaf_IMPL(x)              v(x)
#define SUM_Node_IMPL(lhs, data, rhs) ML99_add3(SUM(v(lhs)), v(data), SUM(v(rhs)))

/*
 *         4
 *        / \
 *       /   \
 *      /     \
 *     2       6
 *    / \     / \
 *   1   3   5   7
 */
#define TREE Node(Node(Leaf(v(1)), v(2), Leaf(v(3))), v(4), Node(Leaf(v(5)), v(6), Leaf(v(7))))

ML99_ASSERT_EQ(SUM(TREE), v(28));

int main(void) {}
