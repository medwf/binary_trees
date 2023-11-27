#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *lt = NULL, *rt = NULL;

	if (!tree)
		return;

	lt = tree->left;
	rt = tree->right;

	if (lt)
		binary_tree_delete(lt);

	if (rt)
		binary_tree_delete(rt);

	free(tree);
	tree = NULL;
}
