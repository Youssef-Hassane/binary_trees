#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * Return: Nothing
 * ---------------------------
 * Prototype: void binary_tree_preorder(const binary_tree_t *tree,
 * void (*func)(int));
 * ---------------------------
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 * ---------------------------
 * By Youssef Hassane
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base case: if tree is NULL or func is NULL, return */
	if (!tree || !func)
	{
		return;
	}

	/* Call function @func with the value of the current node */
	func(tree->n);

	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
