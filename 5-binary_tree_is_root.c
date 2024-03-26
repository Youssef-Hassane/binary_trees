#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * Return: 1 if node is a root, otherwise 0
 * ---------------------------
 * Prototype: int binary_tree_is_root(const binary_tree_t *node);
 * ---------------------------
 * @node: Pointer to the node to check
 * ---------------------------
 * By Youssef Hassane
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* If node is NULL, return 0 */
	if (!node)
	{
		return (0);
	}
	/* Your function must return 1 if node is a root, otherwise 0 */
	if (!node->parent)
	{
		return (1);
	}
	return (0);
}
