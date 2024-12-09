#include "binary_trees.h"

/**
 * binary_tree_insert_left - func
 * @parent: args
 * @value: args
 * Return: Tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);

	newn = binary_tree_node(NULL, value);

	if (newn == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = newn;
		newn->left = parent->left;
	}
	parent->left = newn;
	newn->parent = parent;

	return (newn);
}
