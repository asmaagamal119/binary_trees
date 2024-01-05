#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_tree_insert_left - inserts node as  left-child  another node
 *@parent: pointer to node to insert left-child in
 *@value:  value to store in new node
 *Return: return pointer to created node, or NULL on failure or if parent
 *is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *new;

if (!parent)
return (NULL);
new = malloc(sizeof(struct binary_tree_s));
if (!new)
return (NULL);
new->parent = parent;
new->n = value;
new->right = NULL;
new->left = parent->left;
if (parent->left)
{
parent->left->parent = new;
}
parent->left = new;

return (new);
}
