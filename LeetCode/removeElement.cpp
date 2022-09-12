// https://leetcode.com/problems/remove-element/

class Solution
{
public:
	int removeElement(vector<int> &nums, int val)
	{
		int ptr = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != val)
			{
				swapNumbers(nums[ptr], nums[i]);
				ptr++;
			}
		}

		for (auto itr = nums.begin(); itr != nums.end(); itr++)
		{
			cout << *itr << " ";
		}
		return ptr;
	}
	void swapNumbers(int &x, int &y)
	{
		int temp = 0;
		temp = x;
		x = y;
		y = temp;
	}
};