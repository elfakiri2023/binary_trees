#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: pointer
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t lh, rh;
int right_1, left_1;

if (tree == NULL)
return (0);

lh = binary_tree_height(tree->left);
rh = binary_tree_height(tree->right);

if (rh == lh)
{
if (!tree->right && !tree->left)
return (1);
if (tree->right && tree->left)
{
left_1 = binary_tree_is_perfect(tree->left);
right_1 = binary_tree_is_perfect(tree->right);
return (left_1 && right_1);
}
}
return (0);
}

/**
 * binary_tree_height - calculate height
 * @tree: pointer
 * Return: size
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lh = 0, rh = 0;

if (tree == NULL)
return (0);

if (tree->left)
lh = binary_tree_height(tree->left) + 1;
if (tree->right)
rh = binary_tree_height(tree->right) + 1;

return (lh > rh ? lh : rh);
}
