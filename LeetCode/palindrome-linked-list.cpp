// https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// WITH EXTRA MEMORY
// TIME => O(n), SPACE=> O(n)

class Solution
{
public:
	bool isPalindrome(ListNode *head)
	{
		vector<int> nodesArray;

		while (head != NULL)
		{
			nodesArray.push_back(head->val);
			head = head->next;
		}

		int leftPointer = 0;
		int rightPointer = nodesArray.size() - 1;

		while (leftPointer <= rightPointer)
		{
			if (nodesArray[leftPointer] != nodesArray[rightPointer])
			{
				return false;
			}
			leftPointer++;
			rightPointer--;
		}
		return true;
	}
};