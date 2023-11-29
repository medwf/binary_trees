#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * PrintNodes -  a function that print all node at same height.
 * @N:  is a pointer to the node
 * @depth: integer help to search for nodes.
 * @func: is a pointer to a function to call for each node.
 */
void PrintNodes(const binary_tree_t *N, size_t depth, void (*func)(int))
{
	if (depth == 1)
		func(N->left->n), func(N->right->n);
	else
		PrintNodes(N->left, depth - 1, func), PrintNodes(N->right, depth - 1, func);
}

/**
 * binary_tree_levelorder -  a function that goes through a binary tree
 * using level-order traversal.
 * @tree:  is a pointer to the root node of the tree to traverse.
 * @func: is a pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, depth = 1;

	if (!tree || !func)
		return;

	func(tree->n);
	height = binary_tree_height(tree);
	while (depth <= height)
		PrintNodes(tree, depth, func), depth++;
}
