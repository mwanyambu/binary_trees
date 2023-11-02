#include "binary_trees.h"

/**
 * binary_tree_insert_right - insertsnode at right-child of another node
 * @parent: pointer to node to insert right-child
 * @value: value to store new node
 * Return: pointer to created node else NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
