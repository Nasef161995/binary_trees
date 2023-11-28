#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * @parent: Pointer to the node to print
 * @value: data of nodes
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));
if (new == NULL || parent == NULL)
{
return (NULL);
}
new->n = value;
new->parent = parent;
if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
parent->left = new;
}
else
{
parent->left = new;
}
return (new);
}
