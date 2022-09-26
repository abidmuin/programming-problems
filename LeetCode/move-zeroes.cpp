// https://leetcode.com/problems/move-zeroes/

class Solution
{
public:
	void swapNumbers(int &x, int &y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	void moveZeroes(vector<int> &nums)
	{
		int numsLength = nums.size();
		int zeroPointer = 0;

		for (int i = 0; i < numsLength; i++)
		{
			if (nums[i] != 0)
			{
				swapNumbers(nums[i], nums[zeroPointer]);
				zeroPointer++;
			}
		}

		for (auto itr = nums.begin(); itr != nums.end(); itr++)
		{
			cout << *itr << " ";
		}
	}
};