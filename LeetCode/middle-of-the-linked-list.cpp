// https://leetcode.com/problems/middle-of-the-linked-list/

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
class Solution
{
public:
	ListNode *middleNode(ListNode *head)
	{
		ListNode *middle = head;
		ListNode *end = head;

		while (end != nullptr && end->next != nullptr)
		{
			middle = middle->next;
			end = end->next->next;
		}

		return middle;
	}
};