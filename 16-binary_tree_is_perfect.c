#include "binary_trees.h"
/**
 * binary_tree_is_perfect - ......
 * @tree: ....
 * Return: ....
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}

	if (binary_tree_balance(tree) == 0 || binary_tree_is_full(tree) == 1)
	{
		return (1);
	}

	return (0);
}
/**
 * binary_tree_balance - ......
 * @tree: ....
 * Return: ....
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, bf;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		left = 0;
	else
		left = binary_tree_height(tree->left) + 1;
	if (tree->right == NULL)
		right = 0;
	else
		right = binary_tree_height(tree->right) + 1;
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
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		height = left + 1;
	else
		height = right + 1;
	return (height);
}
/**
 * binary_tree_is_full - ......
 * @tree: ....
 * Return: ....
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
			return (1);
		else
			return (0);
	}
	return (0);
}
