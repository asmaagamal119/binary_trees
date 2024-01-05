#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_delete - delete entire binary tree
 *@tree: pointer to root node of tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
