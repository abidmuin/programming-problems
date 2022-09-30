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

// WITHOUT EXTRA MEMORY
// TIME => O(n), SPACE=> O(1)

class Solution
{
public:
	bool isPalindrome(ListNode *head)
	{
		// Step-1: Find Middle of the Linked List
		// Step-2: Reverse Second Half of the Linked List
		// Step-3: Check Palindrome

		ListNode *slowPointer = head;
		ListNode *fastPointer = head;

		// Step-1
		while (fastPointer && fastPointer->next)
		{
			slowPointer = slowPointer->next;
			fastPointer = fastPointer->next->next;
		}

		// Step-2
		ListNode *previousElement = NULL;
		ListNode *tempNode = NULL;
		while (slowPointer)
		{
			tempNode = slowPointer->next;
			slowPointer->next = previousElement;
			previousElement = slowPointer;
			slowPointer = tempNode;
		}

		// Step-3
		ListNode *leftPointer = head;
		ListNode *rightPointer = previousElement;

		while (rightPointer)
		{
			if (leftPointer->val != rightPointer->val)
			{
				return false;
			}
			leftPointer = leftPointer->next;
			rightPointer = rightPointer->next;
		}
		return true;
	}
};