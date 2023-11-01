#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a node at the left
 * @parent: input parent node
 * @value: input value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

new_node = binary_tree_node(parent, value);

if (parent->right == NULL)
{
parent->right = new_node;
}
else
{
new_node->right = parent->right;
parent->right->parent = new_node;
parent->right = new_node;
}

return (new_node);
}
