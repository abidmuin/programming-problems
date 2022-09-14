// https://leetcode.com/problems/binary-tree-inorder-traversal/

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
	void inorder(TreeNode *root, vector<int> &result)
	{
		if (root == NULL)
		{
			return;
		}
		else
		{
			inorder(root->left, result);
			result.push_back(root->val);
			inorder(root->right, result);
		}
	}

	vector<int> inorderTraversal(TreeNode *root)
	{
		vector<int> result;
		inorder(root, result);
		return result;
	}
};
