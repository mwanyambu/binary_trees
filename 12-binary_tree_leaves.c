#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count leaves
 * Return: number of leaves else 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	size_t lft = binary_tree_leaves(tree->left);
	size_t rt = binary_tree_leaves(tree->right);

	return (lft + rt);
}
