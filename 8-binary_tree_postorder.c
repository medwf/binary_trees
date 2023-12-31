#include "binary_trees.h"

/**
 * binary_tree_postorder -  a function that goes through a binary tree
 *								using post-order traversal
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func:  is a pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *lt = NULL, *rt = NULL;

	if (!tree || !func)
		return;

	lt = tree->left;
	rt = tree->right;

	if (lt)
		binary_tree_postorder(lt, func);

	if (rt)
		binary_tree_postorder(rt, func);

	func(tree->n);
}
