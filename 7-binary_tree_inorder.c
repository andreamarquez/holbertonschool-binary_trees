#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_inorder - Performs an in-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node. The value in the node
 *        is passed as a parameter to this function.
 *
 * Description: This function traverses a binary tree using in-order traversal
 *              (left, root, right) and applies the given function to each
 *				node's value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
