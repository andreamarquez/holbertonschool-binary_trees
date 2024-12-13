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
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of the tree. If tree is NULL, the function
 * returns 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? binary_tree_height_b(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_height_b(tree->right) + 1 : 0;

	return (left_height - right_height);
}
