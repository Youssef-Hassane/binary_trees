#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	/* If the tree is not NULL, count the number of nodes in */
	/* its subtrees and add the result to nodes. */
	if (tree)
	{
		/* If the tree has at least one child, increment nodes by 1. */
		nodes += (tree->left || tree->right) ? 1 : 0;
		/*Count the number of nodes in the left subtree and add the result to nodes*/
		nodes += binary_tree_nodes(tree->left);
		/*Count the number of nodes in the right subtree and addthe result to nodes*/
		nodes += binary_tree_nodes(tree->right);
	}
	/* Return the number of nodes in the tree. */
	return (nodes);
}
