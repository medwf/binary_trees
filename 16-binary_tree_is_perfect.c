#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 on perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance(tree))
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (
		binary_tree_is_perfect(tree->left) *
		binary_tree_is_perfect(tree->right));
}
