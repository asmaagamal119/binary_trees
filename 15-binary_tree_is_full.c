#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_full - checks if binary tree is full.
 * @tree: pointer to root node of tree.
 * Return: 0 if null
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = binary_tree_is_full(tree->left);
	b = binary_tree_is_full(tree->right);
	if (a == b)
		return (1);
	else
		return (0);
}
