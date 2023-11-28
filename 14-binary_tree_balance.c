#include "binary_trees.h"

/**
 * Max - a function that return maximum.
 * @a: an integer.
 * @b: an integer.
 * Return: a or b.
 */
size_t Max(int a, int b)
{
	return (a >= b ? a : b);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: The number of height otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (
		Max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)) +
		1);
}

/**
 * binary_tree_balance - a function that measures the balance factor
 *					of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: the number of balance or 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (
		binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}
