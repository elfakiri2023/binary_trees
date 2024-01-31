#include "binary_trees.h"

/**
  * binary_tree_is_leaf - node is a leaf or not
  * @node: pointerl
  * Return: 1 or 0
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
