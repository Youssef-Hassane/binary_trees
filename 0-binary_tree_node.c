#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * Return: Pointer to the new node
 * ----------------------------
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 * ----------------------------
 * By Youssef Hassane
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for the new node */
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	
	/* Check if the allocation was successful */
	if (!node)
	{
		/* Free the memory allocated */
		FREE_VARIABLE(node);
		/* If not, return null pointer */
		return (theNull);
	}
	
	/* Set the value of the node */
	node->n = value;
	
	/* Set the parent of the node */
	node->parent = parent;
	
	/* Initialize the left and right child pointers to null */
	node->left = theNull;
	node->right = theNull;

	/* Return the new node */
	return (node);
}
