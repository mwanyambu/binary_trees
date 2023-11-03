#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of tree to measure balance factor
 * Return: balance factor else 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (height_left - height_right);
}
/**
 * binary_tree_height - gets the height of binary tree
 * @tree: pointer to root node of tree to get height
 * Return: height else 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;
	if (tree == NULL)
	{
		return (0);
	}
	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((height_left > height_right) ? height_left : height_right);
}
