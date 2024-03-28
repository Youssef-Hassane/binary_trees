#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	/* If the tree is not NULL, count the number of leaves in */
	/* its subtrees and add the result to leaves. If the tree is NULL, return 0 */
	if (tree)
	{
		/*If the tree has no left and right subtrees its a leaf increment leav by 1*/
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		/*Count the number of leaves in the left subtree and add the result to leav*/
		leaves += binary_tree_leaves(tree->left);
		/*Count the number of leaves in the right subtree and addthe result to leav*/
		leaves += binary_tree_leaves(tree->right);
	}
	/* Return the number of leaves in the tree. */
	return (leaves);
}
