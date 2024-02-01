#include "binary_trees.h"

/**
 * binary_tree_is_full - function to checks if tree is full
 * @tree: Pointer
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
{
return (full_checker(tree));
}
}

/**
 * full_checker - Checks if a binary tree is full
 * @tree: Pointer
 * Return: the value 1 or 0
 */
int full_checker(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

if (tree->left && tree->right)
{
return (full_checker(tree->left) && full_checker(tree->right));
}
return (0);
}
