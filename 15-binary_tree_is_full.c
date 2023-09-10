#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If it's a leaf node (no children), it's full. */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If it has one child or none, it's not full. */
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		return (0);

	/* Recursively check the left and right subtrees. */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
