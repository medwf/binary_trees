#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a left-rotation
 * @tree:  is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated or NULL
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_tree;

	if (!tree || !tree->right)
		return (NULL);

	new_tree = tree->right, tree->right = new_tree->left;

	if (new_tree->left)
		new_tree->left->parent = tree;
	new_tree->left = tree, new_tree->parent = tree->parent;
	tree->parent = new_tree;

	return (new_tree);
}
