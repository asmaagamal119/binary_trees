#include "binary_trees.h"
#include <stddef.h>

/**
 *binary_tree_nodes - counts nodes with at least 1 child in binary tree
 *@tree : is pointer toroot node of tree to measure leaves.
 *Return: 0 if null.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);
	a = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (a + b + 1);
	else
		return (0);
}
