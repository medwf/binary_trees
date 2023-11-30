#include "binary_trees.h"

/**
 * binary_tree_rotate_right - a function that performs a right-rotation
 * @tree:  is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated or NULL
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_tree;

	if (!tree || !tree->left)
		return (NULL);

	new_tree = tree->left, tree->left = new_tree->right;

	if (new_tree->right)
		new_tree->right->parent = tree;
	new_tree->right = tree, new_tree->parent = tree->parent;
	tree->parent = new_tree;

	return (new_tree);
}
