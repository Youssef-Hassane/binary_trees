#include "binary_trees.h"

/**
 * binary_tree_sibling - Returns the sibling of a node
 * Return: A pointer to the sibling node
 * -------------------------
 * Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node)
 * -------------------------
 * @node: A pointer to the node to find the sibling of
 * -------------------------
 * By Youssef Hassane
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node is NULL or if node's parent is NULL, return NULL */
	/* If node is NULL, the function cannot find a sibling */
	/* If node's parent is NULL, the function cannot find a sibling */
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/* Check if node is the left child of its parent */
	/* if so return the right child of the parent */
	/* Otherwise, return the left child of the parent */
	/* This is the sibling of the node */
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
