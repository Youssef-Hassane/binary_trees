#include "binary_trees.h"

/**
 * binary_tree_postorder- Goes through a binary tree using post-order traversal
 * Return: Nothing
 * --------------------------
 * Prototype: void binary_tree_postorder(const binary_tree_t *tree,
 * --------------------------------
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 * --------------------------------
 * By Youssef Hassane
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base case: if tree or func is NULL, return */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Recursively traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Call function @func with the value of the current node */
	func(tree->n);
}
