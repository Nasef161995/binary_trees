#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - ......
 * @tree: ....
 * Return: ....
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, bf;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL)
	{
		left = 0;
	}
	else
	{
		left = binary_tree_height(tree->left) + 1;
	}
	if (tree->right == NULL)
	{
		right = 0;
	}
	else
	{
		right = binary_tree_height(tree->right) + 1;
	}

	bf = left - right;
	return (bf);
}

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
