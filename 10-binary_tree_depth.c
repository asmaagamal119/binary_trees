#include "binary_trees.h"
#include <stddef.h>

/**
 *binary_tree_depth - give depth of tree
 *@tree :  pointer to  root node of tree to measure depth.
 *Return: 0 if null.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !(tree->parent))
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
