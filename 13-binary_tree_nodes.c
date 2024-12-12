#include "binary_trees.h"

/**
 * binary_tree_nodes - least 1 child in a binary tree
 * @tree: tree to count the number of nodes
 * Return: 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	size_t tree_nodes = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	nodes = binary_tree_nodes(tree->left);
	tree_nodes = binary_tree_nodes(tree->right);
	return (nodes + tree_nodes + 1);
}
