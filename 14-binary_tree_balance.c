#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_height - Measures height of binary tree.
 * @tree:  pointer to root node of tree.
 * Return: 0 if null
 */
int binary_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		left = tree->left ? 1 + binary_height(tree->left) : 1;
		right = tree->right ? 1 + binary_height(tree->right) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}

/**
 *binary_tree_balance - measures balance factor of binary tree
 *@tree : is pointer to root node of tree.
 *Return: 0 if null.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_height(tree->left) - binary_height(tree->right));
}
