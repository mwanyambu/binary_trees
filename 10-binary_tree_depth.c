#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary_tree
 * @tree: pointer to the node to measure depth
 * Return: depth else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
