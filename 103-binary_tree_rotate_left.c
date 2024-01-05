#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_rotate_left - performs left-rotation on binary tree
 *@tree: pointer to root node of tree to rotate.
 *Return:  pointer to new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *p, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	p = tree->right;
	tmp = p->left;
	p->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = p;
	p->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = p;
		else
			tmp->right = p;
	}
	return (p);
}
