#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_is_root - checks if node is root
 *@node: pointer to node to check
 *Return: return 1 if node is  root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
