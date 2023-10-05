#include "binary_trees.h"

/**
 * check_balance_avl - checks the balance of each node
 *
 * @node: pointer to the node
 * @value: input value
 * Return: no return
 */
void check_balance_avl(avl_t **node, int value)
{
	int balance;

	balance = binary_tree_balance(*node);

	if (balance > 1 && value > (*node)->left->n)
	{
		*node = binary_tree_rotate_right(*node);
		return;
	}

	if (balance < -1 && value < (*node)->right->n)
	{
		*node = binary_tree_rotate_left(*node);
		return;
