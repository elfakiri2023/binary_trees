#include "binary_trees.h"

/**
 * binary_tree_insert_right - Introduces a fresh node as the right child.
 * @parent: Pointer to the target node where the right child will be added.
 * @value: The value to be stored in the newly created node.
 *
 * Description: This function enhances the binary
 * on the right side of the provided parent node
 *
 * Return: A pointer to the recently added node, or NULL in case of failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	return (node);
}
