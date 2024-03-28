#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: The pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling or NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node->parent->left ==
			node ? node->parent->right : node->parent->left);
}
