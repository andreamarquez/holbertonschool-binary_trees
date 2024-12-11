#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_postorder - Goes through a binary tree using post-order
 * traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The value in
 * the node
 *        must be passed as a parameter to this function.
 *
 * Description: This function traverses a binary tree in post-order,
 * which means
 *              it visits the left subtree, then the right subtree, and finally
 *              the root node. The function pointed to by `func` is called for
 *              each node with the node's value as its argument.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
