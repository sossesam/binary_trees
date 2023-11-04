#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node
 * @tree: tree is a pointer to the node to measure the depth
 *
 * Return: returns the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;

if (tree == NULL)
return (0);

if (tree->parent == NULL)
return (0);

depth = binary_tree_depth(tree->parent) + 1;

return (depth);

}
