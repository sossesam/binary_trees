#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count;
	count = 0;

	if (tree == NULL)
		return 0;
	
	if(tree->left){
	count++;
	binary_tree_height(tree->left);
	}

	if (tree->right){
	count++;
	binary_tree_height(tree->right);
	}


return count;
}
