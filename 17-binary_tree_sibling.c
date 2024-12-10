#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a given node.
* @node: Pointer to the node to find the sibling of.
*
* Return: Pointer to the sibling node, or NULL if no sibling or invalid node.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
