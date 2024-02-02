#include "binary_trees.h"

/**
  * binary_tree_rotate_left - left-rotation 
  * @tree: pointer
  * Return: root
  */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *original
binary_tree_t *value_1;
binary_tree_t *value_2;

if (tree == NULL)
{
return (NULL);
}

original = tree;
value_1 = original->right;
if (value_1->left)
{
value_2 = value_1->left;
}
else
{
value_2 = NULL;
}

value_1->parent = original->parent;
value_1->left = original;
original->parent = value_1;
original->right = value_2;

if (value_2 != NULL)
{
value_2->parent = original;
}

return (value_1);
}
