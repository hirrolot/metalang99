> WARNING: still under v0.1.0 active development.

# Epilepsy

[![CI](https://github.com/Hirrolot/epilepsy/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/epilepsy/actions)
[![docs](https://img.shields.io/badge/docs-readthedocs.io-blue)](https://epilepsy.readthedocs.io/en/latest/)
[![spec](https://img.shields.io/badge/spec-PDF-green)](https://github.com/Hirrolot/epilepsy/blob/master/spec/spec.pdf)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp; &emsp; <b>-- Darth Sidious</b>

TODO: the main example.

Epilepsy is a functional language aimed at full-blown C/C++ preprocessor metaprogramming.

It features a wide range of concepts, including algebraic data types, control flow operators, collections, general recursion, and auto-currying -- to make metaprograms of all sizes maintainable.

## Overview

### Data model

#### Tuple types

[[ `examples/rectangle.c` ](examples/rectangle.c)]
```c
// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rect(width, height) E_call(Rect, width height)
#define RectArea(rect)      E_call(RectArea, rect)

#define RectWidth  v(0)
#define RectHeight v(1)

#define Rect_IMPL(width, height) E_tuple(v(width, height))
#define RectArea_IMPL(rect)      E_uintMul(E_get(v(rect), RectWidth), E_get(v(rect), RectHeight))

/*
 *                15
 * +------------------------------+
 * |                              |
 * |                              |
 * |                              | 7
 * |                              |
 * |                              |
 * +------------------------------+
 */
#define RECTANGLE Rect(v(15), v(7))

E_assertEq(RectArea(RECTANGLE), v(15 * 7));

int main(void) {}
```

#### Choice types

[[ `examples/binary_tree.c` ](examples/binary_tree.c)] [ [Playground >>](https://godbolt.org/z/5xW5ne) ]

```c
// Sums all nodes of a binary tree, recursively.

#include <epilepsy.h>

#define TreeLeaf(x)              E_call(TreeLeaf, x)
#define TreeNode(lhs, data, rhs) E_call(TreeNode, lhs data rhs)

#define SUM(tree) E_call(SUM, tree)

#define TreeLeaf_IMPL(x)              E_choice(v(TreeLeaf), v(x))
#define TreeNode_IMPL(lhs, data, rhs) E_choice(v(TreeNode), v(lhs, data, rhs))

#define SUM_IMPL(tree)                    E_match(v(tree), v(SUM_))
#define SUM_TreeLeaf_IMPL(x)              v(x)
#define SUM_TreeNode_IMPL(lhs, data, rhs) E_uintAddVariadics(SUM(v(lhs)) v(data) SUM(v(rhs)))

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

E_assertEq(SUM(TREE), v(28));

int main(void) {}
```

## FAQ

### Q: Why formal specification?

A:

 - **Formal proofs.** With a mathematical model it becomes possible to prove things about Epilepsy formally; for example, the progress theorem, which can be stated as "the interpreter always knows what to do next".

 - **It guides the implementation.** The implementation gets adjusted with the specification (i.e. reflects the formal syntax and semantics), thereby making itself easier to reason about.

 - **It guides the tests.** We immediately see many, if not all corner cases, which are ought to be tested.

 - **Distinctness.** With a formal specification, it is much easier to answer questions like "Is it a bug of the implementation or it is a valid behaviour according to the specification?".

That is, the development flow is "specification-driven", if you prefer.
