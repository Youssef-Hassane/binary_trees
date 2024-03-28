#include "binary_trees.h"

/**
 * binary_tree_uncle - Returns the uncle of a node
 * Return: A pointer to the uncle node
 * -----------------------
 * Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node)
 * -----------------------
 * @node: A pointer to the node to find the uncle of
 * -----------------------
 * By Youssef Hassane
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if node or its parent or its grandparent is NULL, */
	/* in which case there is no uncle and we return NULL. */
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	/* Check if node is the left child of its parent. */
	/* If so, return the right child of its grandparent. */
	/* Otherwise, return the left child of its grandparent. */

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	/* Return the left child of its grandparent. */
	return (node->parent->parent->left);
}
