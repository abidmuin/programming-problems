// https://leetcode.com/problems/single-element-in-a-sorted-array/

/*
Time Complexity => O(log n)
Space Complexity => O(1)
*/

class Solution
{
public:
	int singleNonDuplicate(vector<int> &nums)
	{
		int leftPointer = 0;
		int rightPointer = nums.size() - 1;
		int midPointer = 0;
		int leftPartSize = -1;
		int result = -1;

		while (leftPointer <= rightPointer)
		{
			midPointer = leftPointer + ((rightPointer - leftPointer) / 2);

			if (((midPointer - 1 < 0) || (nums[midPointer - 1] != nums[midPointer])) &&
				((midPointer + 1 == nums.size()) || (nums[midPointer] != nums[midPointer + 1])))
			{
				result = nums[midPointer];
				break;
			}

			// Calculate the size of the left part
			if (nums[midPointer - 1] == nums[midPointer])
			{
				leftPartSize = midPointer - 1;
			}
			else
			{
				leftPartSize = midPointer;
			}

			// Search the odd part for single element
			if (leftPartSize & 1)
			{
				rightPointer = midPointer - 1;
			}
			else
			{
				leftPointer = midPointer + 1;
			}
		}

		return result;
	}
};