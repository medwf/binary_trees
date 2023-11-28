#include "binary_trees.h"

/**
 * ADD - a function that return maximum.
 * @a: an integer.
 * @b: an integer.
 * Return: a or b.
 */
size_t ADD(int a, int b)
{
	return (a + b);
}

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: The size of tree, otherwise 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (
		ADD(binary_tree_size(tree->left),
			binary_tree_size(tree->right)) +
		1);
}
