#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * Return: 1 if the tree is full, 0 otherwise
 * -----------------------------
 * Prototype: int binary_tree_is_full(const binary_tree_t *tree)
 * -----------------------------
 * @tree: A pointer to the root node of the tree to check
 * -----------------------------
 * By Youssef Hassane
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Checks if a binary tree is full
 * Return: 1 if the tree is full, 0 otherwise
 * -----------------------------
 * Prototype: int is_full_recursive(const binary_tree_t *tree)
 * -----------------------------
 * @tree: A pointer to the root node of the tree to check
 * -----------------------------
 * By Youssef Hassane
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
