#include <stdlib.h>
#include "binary_trees.h"
/**
 *  binary_tree_node - is a function that creates the node
 *
 *  @parent: the parent node
 *  @value: the value of the node
 *  Return: return the pointer to the created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));

if (new_node)
{
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
}
else
{
return NULL;
};
return (new_node);
}
