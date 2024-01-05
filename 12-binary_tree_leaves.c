#include "binary_trees.h"
#include <stddef.h>

/**
 *binary_tree_leaves - give number of leaves of tree
 *@tree : pointer to root node of tree to measure leaves.
 *Return: 0 if null.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);
	a = binary_tree_leaves(tree->left);
	b = binary_tree_leaves(tree->left);
	if (a == 0 && b == 0)
	{
		return (1);
	}
	return (a + b);
}
