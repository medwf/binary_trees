#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through a binary tree
 *					using pre-order traversal
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func: is a pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *lt = NULL, *rt = NULL;

	if (!tree || !func)
		return;

	func(tree->n);
	lt = tree->left;
	rt = tree->right;

	if (lt)
		binary_tree_preorder(lt, func);

	if (rt)
		binary_tree_preorder(rt, func);
}
