#include "binary_trees.h"

/**
  * binary_tree_height - calculate the height the tree
  * @tree: pointer
  * Return: 0 if null or 1 if not
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;

if (!tree)
return (0);

if (tree->left)
left_height = binary_tree_height(tree->left) + 1;

if (tree->right)
right_height = binary_tree_height(tree->right) + 1;

if (left_height > right_height)
{
return (left_height);
}
else
{
return (right_height);
}
}

/**
 * binary_tree_is_perfect - Checks if a inary tree is perfect
 *
 * @tree: A pointer to the root node of the tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_height, right_height;
int right_1;
int left_1;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (right_height != left_height)
{
return (0);
}
if (!tree->right && !tree->left)
return (1);
if (tree->right && tree->left)
{
left_1 = binary_tree_is_perfect(tree->left);
right_1 = binary_tree_is_perfect(tree->right);
return (left_1 && right_1);
}
}
