#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node:  is a pointer to the node to find the sibling
 * Return: a pointer to the sibling node, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left)
	{
		if (node->n == node->parent->left->n)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}
