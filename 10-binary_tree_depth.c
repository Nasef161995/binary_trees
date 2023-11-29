#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - ......
 * @tree: ....
 * Return: ....
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
	{
		return (0);
	}
	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
