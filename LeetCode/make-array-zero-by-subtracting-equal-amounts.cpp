// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/

class Solution
{
public:
	int minimumOperations(vector<int> &nums)
	{
		int minOperations = 0;
		int vecSize = nums.size();
		int tempValue = 0;
		sort(nums.begin(), nums.end());

		for (int num : nums)
		{
			if (num > 0)
			{
				minOperations++;
				tempValue = num;

				for (int &num : nums)
				{
					num -= tempValue;
				}
			}
		}
		return minOperations;
	}
};