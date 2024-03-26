#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree and frees its memory
 * Return: Nothing
 * ----------------------------
 * Prototype: void binary_tree_delete(binary_tree_t *tree);
 * ----------------------------
 * @tree: Pointer to the root node of the tree to delete
 * ---------------------------
 * By Youssef Hassane
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (tree)
	{
		/* Recursively delete left and right subtrees */
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		/* Free the current node */
		FREE_VARIABLE(tree);
	}
}
