#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 * right-child of another node
 * Return: Pointer to the new node
 * ----------------------------
 * Prototype: binary_tree_t
 * *binary_tree_insert_right(binary_tree_t
 * *parent, int value);
 * ----------------------------
 * @parent: Pointer to the parent node
 * @value: Value to put in the newNode node
 * ----------------------------
 * By Youssef Hassane
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Pointer to the new node */
	binary_tree_t *newNode;

	/* If the parent is NULL return NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node */
	newNode = binary_tree_node(parent, value);

	 /* If the new node creation fails, return NULL */
	if (newNode == NULL)
		return (NULL);

	/* If the right child of the parent node already exists */
	if (parent->right != NULL)
	{
		/*Set the right child of the new node to the right child of the parent node*/
		newNode->right = parent->right;
		/* Set the parent of the right child of the parent node to the new node */
		parent->right->parent = newNode;
	}
	/* Set the right child of the parent node to the new node */
	parent->right = newNode;
	/* Return the new node */
	return (newNode);
}
