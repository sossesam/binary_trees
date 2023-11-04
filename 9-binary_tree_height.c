#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_height(const binary_tree_t *tree){
	size_t ldepth;
	size_t rdepth;
	
	if (tree == NULL)
	return 0;

	if (tree->right == NULL && tree->left == NULL)
	return 0;

	ldepth = binary_tree_height(tree->left) + 1;
	rdepth = binary_tree_height(tree->right) + 1;

	if (ldepth > rdepth){
	return ldepth ;}
	else{
		return rdepth;}
}
