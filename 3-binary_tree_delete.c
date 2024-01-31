#include "binary_trees.h"

/**
  * binary_tree_delete - delete the binary tree.
  * @tree: pointer to the node
  * Return: void
  */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

    if (tree->right != NULL)
		binary_tree_delete(tree->right);

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	
	free(tree);
    tree = NULL;
}
