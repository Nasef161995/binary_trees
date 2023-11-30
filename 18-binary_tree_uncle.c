#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - ......
 * @node: ....
 * Return: ....
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent->parent->right && parent->parent->left)
	{
	if (parent->parent->left->left == node || parent->parent->left->right == node)
	{
		return (parent->parent->left);
	}
	return (parent->parent->right);
	}
	return (NULL);
}
