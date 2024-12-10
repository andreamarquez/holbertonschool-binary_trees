#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* DATA STRUCTURE */
/**
 * struct binary_tree_s - Binary tree node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int value;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* PROTOTYPES */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */
