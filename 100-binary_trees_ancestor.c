#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 *  FindNode - a function that check if node exist under node
 * @value: is The value of my node
 * @node: is a pointer to the node
 * Return: 1 on Success or 0 en failer.
 */
int FindNode(int value, const binary_tree_t *node)
{
	if (value == node->n)
		return (1);
	if (!node->left && !node->right)
		return (0);

	return (FindNode(value, node->left) + FindNode(value, node->right));
}
/**
 * binary_trees_ancestor -  a function that finds the lowest common
 * ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 *			or NULL.
 */
binary_tree_t *
binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (FindNode(second->n, first))
		return ((void *)first);

	if (FindNode(first->n, second))
		return ((void *)second);

	if (first->parent->n != second->parent->n)
	{
		if (FindNode(second->n, first->parent))
			return ((void *)first->parent);
		if (FindNode(first->n, second->parent))
			return ((void *)second->parent);
	}
	else
		return ((void *)first->parent);
	return (NULL);
}
