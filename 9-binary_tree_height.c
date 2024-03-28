#include "binary_trees.h"

/**
 * binary_tree_height - Returns the height of a binary tree
 * Return: Height of the binary tree
 * ---------------------
 * Prototype: size_t binary_tree_height(const binary_tree_t *tree)
 * ----------------------
 * @tree: Pointer to the root node of the tree to traverse
 * ------------------
 * By Youssef Hassane
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* If tree is NULL, the height is 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Get the height of the left and right subtrees */
	size_t l = 0, r = 0;

	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* Return the maximum height of the left and right subtrees plus 1 */
	return ((l > r) ? l : r);
}
