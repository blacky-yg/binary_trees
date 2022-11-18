#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node at the left
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return:  pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);
	if (!parent)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (!parent->left)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	return (new_node);
}
