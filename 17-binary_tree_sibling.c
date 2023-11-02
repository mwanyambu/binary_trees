#include "binary_trees.h"

/**
 * binary_tree_sibling - looks for sibling of a node in binary tree
 * @node: pointer to node to look for sibling
 * Return: sibling else NULL if tree is null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
