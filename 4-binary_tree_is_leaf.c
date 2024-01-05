#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_is_leaf - checks if node is leaf
 *@node:  pointer to  node to check
 *Return: return 1 if node is leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
{
return (0);
}
if (!node->left && !node->right)
{
return (1);
}
return (0);
}
