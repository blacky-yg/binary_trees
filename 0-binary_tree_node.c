#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: pointer to parent
 * @value: value stored
 * Return: pointer to the new node or Null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	return (new_node);
}
