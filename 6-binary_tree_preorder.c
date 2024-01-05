#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_preorder -  goes through binary tree using pre-order traversal
 *@tree: pointer to root node of tree to traverse
 *@func: pointer to function to call for each node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
