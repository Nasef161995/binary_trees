#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_size - ......
 * @tree: ....
 * Return: ....
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size, left, right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	tree_size = left + right + 1;
	return (tree_size);
}
