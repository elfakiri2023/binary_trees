#include "binary_trees.h"

/**
 * binary_tree_preorder - binary tree using traversal pre-order.
 * @tree: pointer
 * @func: pointer
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree)
	return;

if (!func)
	return;

func(tree->n);

if (tree->left != NULL)
	binary_tree_preorder(tree->left, func);

if (tree->right != NULL)
	binary_tree_preorder(tree->right, func);
}
