#include "binary_trees.h"

/**
 * tree_is_perfect - function that checks if a tree is perfect
 * @tree: tree to check
 * Return: 0 if it is not perfect, otherwise, the height of the tree
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = tree_is_perfect(tree->left);
	right_height = tree_is_perfect(tree->right);

	if (left_height == 0 || right_height == 0 || left_height != right_height)
		return (0);

	return (1 + left_height);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
		return (0);

	result = tree_is_perfect(tree);
	return (result != 0);
}

