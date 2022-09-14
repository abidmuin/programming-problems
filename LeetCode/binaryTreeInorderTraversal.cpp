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

// ITERATIVE APPROACH
class Solution
{
public:
	vector<int> inorderTraversal(TreeNode *root)
	{
		TreeNode *currentElement = root;
		stack<TreeNode *> st;
		vector<int> result;

		while (currentElement != NULL || !st.empty())
		{
			while (currentElement != NULL)
			{
				st.push(currentElement);
				currentElement = currentElement->left;
			}
			currentElement = st.top();
			st.pop();
			result.push_back(currentElement->val);
			currentElement = currentElement->right;
		}

		return result;
	}
};