#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - Write a function that goes through a binary
 * tree using pre-order traversal
 * @tree: The root node to be deleted
 * @func:  funcrtion to call
 * Return: returns an integer
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
return;
if (func == NULL)
return;

(func)(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}

