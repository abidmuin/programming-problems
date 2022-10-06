// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

class Solution
{
public:
	int findUnsortedSubarray(vector<int> &nums)
	{
		int numSize = nums.size();

		int lowPointer = -1;
		int highPointer = -1;

		int minNumber = INT_MAX;
		int maxNumber = INT_MIN;

		// first index of unsorted subarray
		for (int i = numSize - 1; i >= 0; i--)
		{
			if (nums[i] <= minNumber)
			{
				minNumber = nums[i];
			}
			else
			{
				lowPointer = i;
			}
		}

		// last index of unsorted subarray
		for (int i = 0; i < numSize; i++)
		{
			if (nums[i] >= maxNumber)
			{
				maxNumber = nums[i];
			}
			else
			{
				highPointer = i;
			}
		}

		int subarrayLength = highPointer - lowPointer + 1;

		if (subarrayLength > 1)
		{
			return subarrayLength;
		}
		else
		{
			return 0;
		}
	}
};