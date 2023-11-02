#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure size
 * Return: size else 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t size_left = binary_tree_size(tree->left);
	size_t size_right = binary_tree_size(tree->right);

	return (1 + size_left + size_right);
}
