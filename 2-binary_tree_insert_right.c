#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node right
 * @parent: Pointer to the node to print
 * @value: data of nodes
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (parent == NULL)
{
return (NULL);
}
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
{
return (NULL);
}
new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;
if (parent->right != NULL)
{
new->right = parent->right;
new->right->parent = new;
parent->right = new;
}
else
{
parent->right = new;
}
return (new);
}
