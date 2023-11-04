#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - a function thatcounts the number of a leaves
 * @tree: tree is a pointer to the root
 *
 * Return: returns the number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t no_of_nodes;
size_t left;
size_t right;

if (tree == NULL)
	return 0;
if (tree->right == NULL && tree->left == NULL)
	return 0;

left = binary_tree_nodes(tree->left);
right = binary_tree_nodes(tree->right);

no_of_nodes = left + right + 1;

return no_of_nodes;

}
