// https://leetcode.com/problems/find-pivot-index/

class Solution
{
public:
	int pivotIndex(vector<int> &nums)
	{
		int totalSum = 0;
		for (int num : nums)
		{
			totalSum += num;
		}

		int leftSum = 0;
		int rightSum = 0;
		int pivotIndex = -1;

		for (int i = 0; i < nums.size(); i++)
		{
			rightSum = totalSum - leftSum - nums[i];
			if (leftSum == rightSum)
			{
				pivotIndex = i;
				break;
			}
			leftSum += nums[i];
		}
		return pivotIndex;
	}
};