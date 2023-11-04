#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - a function thatcounts the number of a leaves
 * @tree: tree is a pointer to the root
 *
 * Return: returns the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves;
size_t left;
size_t right;


if (tree == NULL)
return (0);


if (tree->right == NULL && tree->left == NULL)
return (1);

left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);
leaves = left + right;


return (leaves);
}
