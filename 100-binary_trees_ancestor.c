#include "binary_trees.h"

/**
 * binary_trees_ancestor - search for the lowest common nodes
 * @first: node
 * @second: node
 * Return: NULL or node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
binary_tree_t *data;

if (first == NULL || second == NULL)
return (NULL);

while (first)
{
data = (binary_tree_t *) second;
while (data)
{
if (data == first)
return ((binary_tree_t *) first);
data = data->parent;
}
first = first->parent;
}
return (NULL);
}
