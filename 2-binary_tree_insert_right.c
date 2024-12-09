#include "binary_trees.h"

/**
 * binary_tree_insert_right - func
 * @parent: args
 * @value: func
 * Return: Tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);
	newn = binary_tree_node(NULL, value);
	if (newn == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = newn;
		newn->right = parent->right;
	}
	parent->right = newn;
	newn->parent = parent;
	return (newn);
}
