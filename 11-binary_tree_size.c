#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node
 * @tree: tree is a pointer to the node to measure the depth
 *
 * Return: returns the depth of the node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size;
size_t left;
size_t right;

if (tree == NULL)
return (0);



left = binary_tree_size(tree->left);
right = binary_tree_size(tree->right);

size = left + right + 1;

return (size);

}
