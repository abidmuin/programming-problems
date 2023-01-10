// https://leetcode.com/problems/maximum-subarray/

class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		int maxSum = nums[0];
		int currentSum = 0;

		for (int num : nums)
		{
			if (currentSum < 0)
			{
				currentSum = 0;
			}
			currentSum += num;
			maxSum = max(currentSum, maxSum);
		}
		return maxSum;
	}
};