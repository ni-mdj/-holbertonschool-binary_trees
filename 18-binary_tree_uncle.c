#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a given node.
* @node: Pointer to the node to find the uncle of.
*
* Return: Pointer to the uncle node, or NULL if no uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
