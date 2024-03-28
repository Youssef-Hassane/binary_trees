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

	/* Base case: tree is empty */
	if (tree == NULL)
	{
		return (0);
	}

	/* Recursive calculation of left and right subtree heights */
	size_t leftHeight = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	size_t rightHeight = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;

	/* Return the larger of the two subtree heights */
	return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}
