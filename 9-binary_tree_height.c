#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Write a function that
 * measures the height of a binary tree.
 * @tree: tree is a pointer to the root node of the
 * tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, or the height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t ldepth;
size_t rdepth;

if (tree == NULL)
return (0);

if (tree->right == NULL && tree->left == NULL)
return (0);

ldepth = binary_tree_height(tree->left) + 1;
rdepth = binary_tree_height(tree->right) + 1;

if (ldepth > rdepth)
{
return (ldepth);
}
else
{
return (rdepth);
}
}
