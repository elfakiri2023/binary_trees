#include "binary_trees.h"

/**
  * binary_tree_size - calculate the size tree
  * @tree: pointer
  * Return: 0 or the size
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_count = 0;

	if (!tree)
		return (size_count);

	if (tree->left)
		size_count = size_count + binary_tree_size(tree->left);

	if (tree->right)
		size_count = size_count + binary_tree_size(tree->right);

	return (size_count + 1);
}
