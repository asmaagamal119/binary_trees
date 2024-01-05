#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_tree_sibling - find sibling of node
 *@node: pointer to  node to find sibling
 *Return: return pointer to sibling node or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent && node->parent->left != node)
		return (node->parent->left);
	else if (node->parent && node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}
