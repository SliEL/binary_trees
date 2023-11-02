#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a bt.
 * @node: A ptr to the node to check.
 *
 * Return: If the node is a root return 1.
 *         Otherwise return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}