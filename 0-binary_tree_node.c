#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_tree_node - function create binary tree node
 *@parent: value to put in new node
 *@value: value to put in new node
 *Return: return pointer to new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(struct binary_tree_s));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
