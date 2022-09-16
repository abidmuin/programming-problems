// https://leetcode.com/problems/merge-two-sorted-lists/

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
	ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
	{

		ListNode *dummyNode, *result;
		dummyNode = new ListNode();
		result = dummyNode;

		while (list1 && list2)
		{
			if (list1->val < list2->val)
			{
				result->next = list1;
				list1 = list1->next;
			}
			else
			{
				result->next = list2;
				list2 = list2->next;
			}
			result = result->next;
		}
		if (list1)
		{
			result->next = list1;
		}
		else
		{
			result->next = list2;
		}

		return dummyNode->next;
	}
};