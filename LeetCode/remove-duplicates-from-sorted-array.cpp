// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
	int removeDuplicates(vector<int> &nums)
	{
		int swapIndex = 1;
		int currentNumber = nums[0];

		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] != currentNumber)
			{
				currentNumber = nums[i];
				swapNumbers(&nums[i], &nums[swapIndex]);
				swapIndex++;
			}
		}

		return swapIndex;
	}

	void swapNumbers(int *x, int *y)
	{
		int temp = 0;
		temp = *y;
		*y = *x;
		*x = temp;
	}
};