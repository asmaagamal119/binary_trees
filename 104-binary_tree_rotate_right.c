#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_rotate_right - performs right-rotation on binary tree
 *@tree: pointer to root node of tree to rotate.
 *Return:  pointer to new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *p, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	p = tree->left;
	tmp = p->right;
	p->right = tree;
	tree->left = tmp;
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
