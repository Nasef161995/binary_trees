#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_height - ......
 * @tree: ....
 * Return: ....
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right, height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
	{
		height = left + 1;
	}
	else
	{
		height = right + 1;
	}
	return (height);
}
