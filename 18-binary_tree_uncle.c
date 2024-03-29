#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_tree_uncle - finds uncle of node
 *@node: pointer to node to find uncle
 *Return: uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node ||
	    !node->parent ||
	    !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
