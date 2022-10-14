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
		int startIndex = 0;
		int endIndex = numSize - 1;

		while (startIndex < endIndex)
		{
			if ((nums[startIndex] & 1) > (nums[endIndex] & 1))
			{
				swapNumbers(nums[startIndex], nums[endIndex]);
			}

			if ((nums[startIndex] & 1) == 0)
			{
				startIndex++;
			}
			
			if ((nums[endIndex] & 1) != 0)
			{
				endIndex--;
			}
		}

		return nums;
	}
};