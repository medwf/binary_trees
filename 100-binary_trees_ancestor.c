#include "binary_trees.h"

/**
 *  FindNode - a function that check if node exist
 * @first: is a pointer to the node
 * @second: is a pointer to the node
 * Return: 1 on Success or 0 en failer.
 */
int FindNode(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!second)
		return (0);
	if (first == second)
		return (1);

	return (FindNode(first, second->parent));
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

	if (FindNode(first, second))
		return ((void *)first);
	return (binary_trees_ancestor(first->parent, second));
}
