#include "binary_trees.h"


/**
 * binary_tree_is_perfect - func
 * @tree: args
 * Return: int value
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh != rh)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));

	return (0);
}
