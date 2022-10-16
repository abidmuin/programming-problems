// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution
{
public:
	vector<int> findDisappearedNumbers(vector<int> &nums)
	{
		int numSize = nums.size();
		int index = 0;
		
		for (int num : nums)
		{
			index = abs(num) - 1;
			nums[index] = (-1 * abs(nums[index]));
		}

		vector<int> result;

		for (int i = 0; i < numSize; i++)
		{
			if (nums[i] > 0)
			{
				result.push_back(i + 1);
			}
		}

		return result;
	}
};