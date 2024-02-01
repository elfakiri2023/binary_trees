#include "binary_trees.h"
/**
 * binary_tree_leaves - get the count of the leaves
 * @tree: pointer
 * Return: the number of total leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->right) && !(tree->left))
		return (1);

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
