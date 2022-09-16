// https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution
{
public:
	vector<int> sortedSquares(vector<int> &nums)
	{
		for (auto itr = nums.begin(); itr != nums.end(); itr++)
		{
			*itr *= *itr;
		}
		sort(nums.begin(), nums.end());

		return nums;
	}
};