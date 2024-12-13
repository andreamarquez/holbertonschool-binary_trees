#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, the function returns 0.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = tree->left ? binary_tree_height_b(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_height_b(tree->right) + 1 : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	if (binary_tree_height_b(tree->left) != binary_tree_height_b(tree->right))
	{
		return (0);
	}

	return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));
}
