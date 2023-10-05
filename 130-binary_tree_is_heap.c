#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: tree root
 * Return: size of the tree or 0 if tree is NULL;
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * tree_is_complete - checks if tree is complete
 *
 * @tree: pointer to the tree root
 * @i: node index
 * @cnodes: number of nodes
 * Return: 1 if tree is complete, 0 otherwise
 */
int tree_is_complete(const binary_tree_t *tree, int i, int cnodes)
