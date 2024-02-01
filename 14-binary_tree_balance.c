#include "binary_trees.h"

/**
 * binary_tree_balance - calculate the binary tree balance.
 * @tree: pointer
 * Return: 0 if tree is NULL, othewise it'll return the balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int right_height;
int left_height;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	left_height = height_calculator(tree->left);
	right_height = height_calculator(tree->right);

	if (!tree->left)
		left_height = -1;
	if (!tree->right)
		right_height = -1;
	return (left_height - right_height);
}

/**
 * height_calculator - calculate the height.
 * @tree: pointer.
 * Return: return the height
 */

size_t height_calculator(const binary_tree_t *tree)
{
size_t right_height;
size_t left_height;

if (!tree || (!tree->right && !tree->left))
{
return (0);
}
else
{
left_height = height_calculator(tree->left);
right_height = height_calculator(tree->right);
return ((left_height > right_height ? left_height : right_height) +1);
}
}
