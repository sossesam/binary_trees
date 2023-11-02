#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - A function that deletes and frees a binary tree
 * @tree: The root node to be deleted
 * Return: returns a void
 */


void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

if (tree->left)
binary_tree_delete(tree->left);

if (tree->right)
binary_tree_delete(tree->right);

free(tree);

}

