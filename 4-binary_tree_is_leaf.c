#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * Return: 1 if node is a leaf, otherwise 0
 * ---------------------------
 * Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
 * ---------------------------
 * @node: Pointer to the node to check
 * ---------------------------
 * By Youssef Hassane
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* If node is NULL, return 0 */
	if (!node)
	{
		return (0);
	}
	/* Your function must return 1 if node is a leaf, otherwise 0 */
	if (!node->left && !node->right)
	{
		return (1);
	}

	return (0);
}
