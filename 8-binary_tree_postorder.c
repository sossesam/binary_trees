#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - Write a function that goes through a binary
 * tree using post-order traversal
 * @tree: The root node to be deleted
 * @func:  funcrtion to call
 * Return: returns an integer
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
return;
if (func == NULL)
return;


binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
(func)(tree->n);
}

