#include "binary_trees.h"

/**
 * binary_tree_insert_left - Introduces a fresh node as the left child.
 * @parent: Pointer to the target node where the left child will be added.
 * @value: The value to be stored in the newly created node.
 *
 * Description: This function enhances the binary
 * on the left side of the provided parent node
 *
 * Return: A pointer to the recently added node, or NULL in case of failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
node->left = NULL;
	node->parent = parent;
	node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}

	parent->left = node;
	return (node);
}
