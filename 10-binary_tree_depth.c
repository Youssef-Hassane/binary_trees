#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * Return: Depth of the binary tree
 * ---------------------------
 * Prototype: size_t binary_tree_depth(const binary_tree_t *tree)
 * ---------------------------
 * @tree: Pointer to the root node of the tree to traverse
 * ---------------------------
 * By Youssef Hassane
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* Check if the tree is NULL or if it has a parent node. */
	/* If it is, add 1 to the depth of its parent, else return 0. */
	/* This recursion continues until a NULL */
	/* tree or a tree without a parent is found. */
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
