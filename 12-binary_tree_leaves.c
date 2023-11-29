#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - ......
 * @tree: ....
 * Return: ....
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, no_leaves;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	no_leaves = left + right;
	return (no_leaves);
}
