#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: root node of the tree to measure the size
 * Return: nothing
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t binary;

	if (tree == NULL)
		return (0);

	binary = 1;
	binary += binary_tree_size(tree->left);
	binary += binary_tree_size(tree->right);
	return (binary);
}
