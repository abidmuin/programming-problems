// https://leetcode.com/problems/symmetric-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// RECURSIVE APPROACH

class Solution
{
public:
	bool isSymmetric(TreeNode *left, TreeNode *right)
	{
		// Check if either of the left or right subtree is null
		// Then return if both of them are NULL or not
		if (left == NULL || right == NULL)
		{
			return left == right;
		}

		if (left->val != right->val)
		{
			return false;
		}

		return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);
	}
	bool isSymmetric(TreeNode *root)
	{
		if (root == NULL)
		{
			return true;
		}

		return isSymmetric(root->left, root->right);
	}
};