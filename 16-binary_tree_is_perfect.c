#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree.
*
* Return: The height of the tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height) + 1;
}

/**
* is_perfect_recursive - Recursively checks if a tree is perfect.
* @tree: Pointer to the current node.
* @height: The height of the tree.
* @level: The current level of the node.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int is_perfect_recursive(const binary_tree_t *tree, size_t height, size_t level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (level == height);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect_recursive(tree->left, height, level &&
		(is_perfect_recursive(tree->right, height, level + 1));
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t height = binary_tree_height(tree);
	return (is_perfect_recursive(tree, height, 0));
}
