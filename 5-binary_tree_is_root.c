#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - A function that checks if a node is a root
 * @node: The root node to be deleted
 * Return: returns an integer
 */


int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->parent == NULL)
return (1);

return (0);
}

