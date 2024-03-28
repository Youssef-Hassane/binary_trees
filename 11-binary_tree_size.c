#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * Return: Size of the binary tree
 * -----------------------
 * Prototype: size_t binary_tree_size(const binary_tree_t *tree);
 * -----------------------
 * @tree: Pointer to the root node of the tree to traverse
 * -----------------------
 * By Youssef Hassane
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Initialize the size variable to 0. */
	size_t size = 0;

	/* If tree is not NULL, increment size by 1. */
	/* Then, recursively call binary_tree_size on */
	/* the left subtree and add the result to size. */
	/* Finally, recursively call binary_tree_size on */
	/* the right subtree and add the result to size. */
	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	/* Return the size of the tree. */
	return (size);
}
