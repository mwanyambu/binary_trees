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
	const binary_tree_t *current = tree;
	size_t depth = 0;

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}
