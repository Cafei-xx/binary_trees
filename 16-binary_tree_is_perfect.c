#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, 1, otherwise, 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns the depth of a given
 *         node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 *
