#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_inorder -   goes through binary tree using in-order traversal
 *@tree: pointer to root node of tree to traverse
 *@func: pointer to function to call for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
