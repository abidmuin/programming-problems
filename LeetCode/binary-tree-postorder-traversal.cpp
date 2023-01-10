// https://leetcode.com/problems/binary-tree-postorder-traversal/

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
	void postorder(TreeNode *root, vector<int> &result)
	{
		if (root == NULL)
		{
			return;
		}
		else
		{
			postorder(root->left, result);
			postorder(root->right, result);
			result.push_back(root->val);
		}
	}

	vector<int> postorderTraversal(TreeNode *root)
	{
		vector<int> result;

		postorder(root, result);

		return result;
	}
};

// ITERATIVE APPROACH

class Solution
{
public:
	vector<int> postorderTraversal(TreeNode *root)
	{
		TreeNode *currentElement = root;
		vector<int> result;
		stack<TreeNode *> st;

		while (currentElement != NULL || !st.empty())
		{
			while (currentElement != NULL)
			{
				st.push(currentElement);
				result.insert(result.begin(), currentElement->val);
				currentElement = currentElement->right;
			}

			currentElement = st.top();
			currentElement = currentElement->left;
			st.pop();
		}

		return result;
	}
};