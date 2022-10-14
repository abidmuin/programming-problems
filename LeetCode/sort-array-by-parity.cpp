// https://leetcode.com/problems/sort-array-by-parity/

class Solution
{
public:
	void swapNumbers(int &x, int &y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	vector<int> sortArrayByParity(vector<int> &nums)
	{
		int numSize = nums.size();
		int evenIndex = 0;

		for (int i = 0; i < numSize; i++)
		{
			if ((nums[i] & 1) == 0)
			{
				swapNumbers(nums[i], nums[evenIndex]);
				evenIndex++;
			}
		}

		return nums;
	}
};