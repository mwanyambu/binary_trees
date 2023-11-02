#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node in binary tree
 * @node: pointer to node to find uncle
 * Return: uncle node else NULL if nod is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
