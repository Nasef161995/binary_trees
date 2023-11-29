#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - ......
 * @tree: ....
 * Return: ....
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right, nodes;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	nodes = left + right + 1;
	return (nodes);
}
