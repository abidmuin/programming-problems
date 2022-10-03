// https://leetcode.com/problems/product-of-array-except-self/

class Solution
{
public:
	vector<int> productExceptSelf(vector<int> &nums)
	{
		int numSize = nums.size();
		vector<int> result(numSize, 1);

		int prefix = 1;
		for (int i = 0; i < numSize; i++)
		{
			result[i] = prefix;
			prefix *= nums[i];
		}

		int postfix = 1;
		for (int i = numSize - 1; i >= 0; i--)
		{
			result[i] *= postfix;
			postfix *= nums[i];
		}

		return result;
	}
};