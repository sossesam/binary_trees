#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a node
 * @tree: tree is a pointer to the node to measure the depth
 *
 * Return: returns the depth of the node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves;
size_t left;
size_t right;


if (tree == NULL)
return (0);


if(tree->right == NULL && tree->left == NULL)
return 1;

left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);
leaves = left + right;


return (leaves);
}
