#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_node - ......
 * @parent: Pointer to the node to print
 * @value: Offset to print
 * Return: ...
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));
if (new == NULL)
{
return (NULL);
}
new->right = NULL;
new->left = NULL;
new->n = value;
new->parent = parent;
return (new);
}
