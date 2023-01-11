// https://leetcode.com/problems/search-insert-position/

class Solution
{
public:
	int searchInsert(vector<int> &nums, int target)
	{
		int lowPointer = 0;
		int highPointer = nums.size() - 1;
		int mid = 0;

		while (lowPointer <= highPointer)
		{
			mid = (lowPointer + highPointer) / 2;

			if (nums[mid] == target)
			{
				return mid;
			}
			else if (nums[mid] < target)
			{
				lowPointer = mid + 1;
			}
			else
			{
				highPointer = mid - 1;
			}
		}

		return lowPointer;
	}
};