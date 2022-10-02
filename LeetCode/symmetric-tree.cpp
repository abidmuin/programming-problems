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
		if (left == nullptr || right == nullptr)
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
		if (root == nullptr)
		{
			return true;
		}

		return isSymmetric(root->left, root->right);
	}
};

// ITERATIVE APPROACH

class Solution
{
public:
	bool isSymmetric(TreeNode *root)
	{
		if (root == nullptr)
		{
			return true;
		}

		queue<TreeNode *> q1;
		queue<TreeNode *> q2;

		q1.push(root->left);
		q2.push(root->right);

		TreeNode *temp1 = nullptr;
		TreeNode *temp2 = nullptr;

		while (!q1.empty() && !q2.empty())
		{
			temp1 = q1.front();
			q1.pop();

			temp2 = q2.front();
			q2.pop();

			if ((temp1 == nullptr && temp2 != nullptr) || (temp1 != nullptr && temp2 == nullptr))
			{
				return false;
			}
			
			if (temp1 != nullptr)
			{
				if (temp1->val != temp2->val)
				{
					return false;
				}

				q1.push(temp1->left);
				q1.push(temp1->right);

				q2.push(temp2->right);
				q2.push(temp2->left);
			}
		}

		return true;
	}
};