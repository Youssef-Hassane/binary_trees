#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * Return: 1 if the tree is full, 0 otherwise
 * ------------------------
 * Prototype: int binary_tree_is_full(const binary_tree_t *tree)
 * ------------------------
 * @tree: A pointer to the root node of the tree to check
 * --------------------------
 * By Youssef Hassane
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (!binary_tree_is_full(tree->left))
		return (0);
	if (!binary_tree_is_full(tree->right))
		return (0);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	return (1);
}

/**
 * height_recursion - measures the height of a binary tree
 * Return: Height of the binary tree
 * -----------------------
 * Prototype: size_t height_recursion(const binary_tree_t *tree)
 * -----------------------
 * @tree: Pointer to the root node of the tree to traverse
 * -----------------------
 * By Youssef Hassane
 */

size_t height_recursion(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree->left)
		left_count = height_recursion(tree->left);
	if (tree->right)
		right_count = height_recursion(tree->right);
	return ((left_count > right_count) ? left_count + 1 : right_count + 1);
}


/**
 * binary_tree_balance - Measures the height of a binary tree
 * Return: If tree is NULL, your function must return 0, else return height.
 * -----------------------
 * Prototype: int binary_tree_balance(const binary_tree_t *tree);
 * -----------------------
 * @tree: A pointer to the root node of the tree to measure the height.
 * -----------------------
 * By Youssef Hassane
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left = height_recursion(tree->left);
		if (tree->right)
			right = height_recursion(tree->right);
		return (left - right);
	}
	else
		return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * Return: 1 if the tree is perfect, 0 otherwise
 * --------------------------
 * Prototype: int binary_tree_is_perfect(const binary_tree_t *tree)
 * --------------------------
 * @tree: A pointer to the root node of the tree to check
 * --------------------------
 * By Youssef Hassane
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int isperfect_left = 1, isperfect_right = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		isperfect_left = binary_tree_is_perfect(tree->left);
	if (tree->right)
		isperfect_right = binary_tree_is_perfect(tree->right);
	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
		return (isperfect_left * isperfect_right);
	return (0);
}
