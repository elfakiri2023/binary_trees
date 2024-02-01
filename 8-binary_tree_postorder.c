#include "binary_trees.h"

/**
  * binary_tree_postorder - our binary tree post-order traversal.
  * @tree: pointer
  * @func: pointer
  * Return: void
  */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

    if(func == NULL)
        return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
