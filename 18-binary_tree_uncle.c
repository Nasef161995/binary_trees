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
	binary_tree_t *parents, *grands;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	parents = node->parent;
	grands = parents->parent;
	if (grands)
	{
		if (grands->left == parents)
		{
			return (grands->right);
		}
		else
			return (grands->left);
	}

	return (NULL);
}
