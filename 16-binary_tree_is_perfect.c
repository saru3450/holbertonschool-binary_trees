#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree: pointer to the root
 * Return: the height of the tree and 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left || !tree->right)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left >= h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}

/**
 * binary_tree_is_perfect - function to check if tree is perfect or not
 * @tree: pointer to the root node
 * Return: 1 if it success or 0 
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left != h_right)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));

	return (0);
}
