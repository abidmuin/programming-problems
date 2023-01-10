// https://leetcode.com/problems/binary-search/

class Solution
{
public:
	int search(vector<int> &nums, int target)
	{
		int lowPointer = 0;
		int highPointer = nums.size() - 1;
		int mid = 0;
		int resultIndex = -1;

		while (lowPointer <= highPointer)
		{
			mid = (lowPointer + highPointer) / 2;

			if (nums[mid] == target)
			{
				resultIndex = mid;
				break;
			}
			else if (target > nums[mid])
			{
				lowPointer = mid + 1;
			}
			else
			{
				highPointer = mid - 1;
			}
		}
		return resultIndex;
	}
};