// https://leetcode.com/problems/rotate-array/

class Solution
{
public:
	void swapNumbers(int &x, int &y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	void reverseArray(vector<int> &nums, int low, int high)
	{
		while (low < high)
		{
			swapNumbers(nums[low], nums[high]);
			low++;
			high--;
		}
	}

	void rotate(vector<int> &nums, int k)
	{
		int arraySize = nums.size();
		k = k % arraySize;

		// Step-1: Reverse the whole array
		reverseArray(nums, 0, arraySize - 1);

		// Step-2: Reverse the first "k" elements
		reverseArray(nums, 0, k - 1);

		// Step-3: Reverse the remaining elements
		reverseArray(nums, k, arraySize - 1);
	}
};