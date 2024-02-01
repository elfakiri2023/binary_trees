#include "binary_trees.h"

/**
 * binary_tree_nodes - calculate the nodes 1 child.
 * @tree: pointer
 * Return: the nodes number
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
}
