#include "binary_trees.h"

/**
 * binary_tree_uncle - search for uncle
 * @node: pointer
 * Return: tree or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !(node->parent) || !(
node->parent->parent))
return (NULL);

return (binary_tree_sibling(node->parent));
}


/**
 * binary_tree_sibling - search for the sibling
 * @node: pointer
 * Return: tree or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !(node->parent) || !(
node->parent->left) || !(node->parent->right))
return (NULL);

if (node == node->parent->left)
return (node->parent->right);

return (node->parent->left);
}
