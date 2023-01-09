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

// ITERATIVE APPROACH

class Solution
{
public:
	vector<int> preorderTraversal(TreeNode *root)
	{
		TreeNode *currentElement = root;
		vector<int> result;
		stack<TreeNode *> st;

		st.push(root);

		while (currentElement != NULL && !st.empty())
		{
			currentElement = st.top();
			result.push_back(currentElement->val);
			st.pop();

			if (currentElement->right != NULL)
			{
				st.push(currentElement->right);
			}
			if (currentElement->left != NULL)
			{
				st.push(currentElement->left);
			}
		}

		return result;
	}
};