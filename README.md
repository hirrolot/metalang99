> WARNING: still under v0.1.0 active development.

# Epilepsy

[![CI](https://github.com/Hirrolot/epilepsy/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/epilepsy/actions)
[![docs](https://img.shields.io/badge/docs-github.io-blue)](https://hirrolot.github.io/epilepsy/)
[![spec](https://img.shields.io/badge/spec-PDF-green)](https://github.com/Hirrolot/epilepsy/blob/master/spec/spec.pdf)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp; &emsp; <b>-- Darth Sidious</b>

TODO: the main example.

Epilepsy is a functional language aimed at C99/C++11 preprocessor metaprogramming.

It provides basic and compound data types, control expressions, collections, boolean logic, and other stuff typically found in normal programming languages.

## Motivation

Epilepsy allows you to create and use embedded [domain-specific languages].

[domain-specific languages]: https://en.wikipedia.org/wiki/Domain-specific_language

## Overview

### Data model

#### Record types

[[ `examples/rectangle.c` ](examples/rectangle.c)]
```c
// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rectangle(width, height)   call(Rectangle_IMPL, width height)
#define RectangleWidth(rectangle)  call(RectangleWidth_IMPL, rectangle)
#define RectangleHeight(rectangle) call(RectangleHeight_IMPL, rectangle)

#define RectangleArea(rectangle) call(RectangleArea_IMPL, rectangle)

#define Rectangle_IMPL(width, height)   EPILEPSY_RECORD(v(width, height))
#define RectangleWidth_IMPL(rectangle)  EPILEPSY_GET(v(rectangle), v(0))
#define RectangleHeight_IMPL(rectangle) EPILEPSY_GET(v(rectangle), v(1))

#define RectangleArea_IMPL(rectangle)                                                              \
    EPILEPSY_UIntMul(RectangleWidth(v(rectangle)), RectangleHeight(v(rectangle)))

/*
 *              15
 * +--------------------------+
 * |                          |
 * |                          |
 * |                          | 6
 * |                          |
 * |                          |
 * |                          |
 * +--------------------------+
 */
#define RECTANGLE Rectangle(v(15), v(6))

EPILEPSY_ASSERT_EQ(RectangleArea(RECTANGLE), v(15 * 6));

int main(void) {}
```

#### Choice types

[[ `examples/binary_tree.c` ](examples/binary_tree.c)] [ [Playground >>](https://godbolt.org/z/5xW5ne) ]

```c
// Sums all nodes of a binary tree, recursively.

#include <epilepsy.h>

#define TreeLeaf(x)              call(TreeLeaf_IMPL, x)
#define TreeNode(lhs, data, rhs) call(TreeNode_IMPL, lhs data rhs)

#define SUM(tree) call(SUM_IMPL, tree)

#define TreeLeaf_IMPL(x)              EPILEPSY_CHOICE(v(TreeLeaf), v(x))
#define TreeNode_IMPL(lhs, data, rhs) EPILEPSY_CHOICE(v(TreeNode), v(lhs, data, rhs))

#define SUM_IMPL(tree)               EPILEPSY_MATCH(v(tree), v(SUM_))
#define SUM_TreeLeaf(x)              v(x)
#define SUM_TreeNode(lhs, data, rhs) EPILEPSY_UIntAddVariadics(SUM(v(lhs)) v(data) SUM(v(rhs)))

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
```

## FAQ

### Q: Why formal specification?

A:

 - **Formal proofs.** With a mathematical model it becomes possible to proof things about Epilepsy formally.

 - **It guides the implementation.** The implementation reflects the formal syntax and semantics, thereby making itself easier to reason about.

 - **It guides the tests.** We immediately see many, if not all corner cases, which are ought to be tested.

 - **Distinctness.** With a formal specification, it is much easier to answer questions like "Is it a bug of the implementation or it is a valid behaviour according to the specification?".

That is, the development flow is "specification-driven", if you prefer.
