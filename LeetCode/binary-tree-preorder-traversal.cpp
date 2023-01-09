// https://leetcode.com/problems/binary-tree-preorder-traversal/

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
	void preorder(TreeNode *root, vector<int> &result)
	{
		if (root == NULL)
		{
			return;
		}
		else
		{
			result.push_back(root->val);
			preorder(root->left, result);
			preorder(root->right, result);
		}
	}

	vector<int> preorderTraversal(TreeNode *root)
	{
		vector<int> result;

		preorder(root, result);

		return result;
	}
};