#include "binary_trees.h"

/**
 * binary_tree_inorder -  a function that goes through a binary tree
 *								using in-order traversal
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func:  is a pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *lt = NULL, *rt = NULL;

	if (!tree || !func)
		return;

	lt = tree->left;
	rt = tree->right;

	if (lt)
		binary_tree_inorder(lt, func);

	func(tree->n);

	if (rt)
		binary_tree_inorder(rt, func);
}
