#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: The node
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left = NULL, *right = NULL;

	if (tree)
	{
		left = tree->left;
		right = tree->right;
		free(tree);
		binary_tree_delete(left);
		binary_tree_delete(right);
	}
}
