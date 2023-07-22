// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */

class Solution
{
public:
	ListNode *deleteDuplicates(ListNode *head)
	{
		if (head == NULL || head->next == NULL)
		{
			return head;
		}

		ListNode *current = head;

		while (current->next != NULL)
		{
			if (current->val == current->next->val)
			{
				ListNode *duplicate = current->next;
				current->next = duplicate->next;
				delete duplicate;
			}
			else
			{
				current = current->next;
			}
		}

		return head;
	}
};